/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "stdlib.h"
#include "stdio.h"
volatile int flag=0;
int flag_cont,flag_stop,flag_reset,flag_busqueda=0;
volatile uint8 index_vis=0;
volatile uint32 datos=0;
volatile float temperatura;
uint8 count_t=0;
char valor[4];
int x,y=0;
//#include "device.h"
void Visualizacion(float32 dato);
char8 Keypad_1_Key[4][4] = {
					{'1','2','3','A'},		//Row 0
					
					{'4','5','6','B'},		//Row 1
										
					{'7','8','9','C'},		//Row 2
					
					{'*','0','#','D'}		//Row 3
				  };

CY_ISR(Timer){
  pin_Write(1);
  if(count_t<60){
     count_t++;  
     EEPROM_WriteByte(temperatura,count_t);
  }else{
     flag_stop=1;
     count_t=0;
    

 }

}

CY_ISR(press_ISR){
        
    char t=Keypad_1_GetButton();
    CyDelay(200);    
switch(t){
    case 'A'://inicio de captura
        flag=1;
    break;
    case 'B'://reset
        flag_reset=1;
        flag=0;        
    break;
    case 'C':
    
    break;
    case 'D':
    
    break;
    case '1':
         
    break;
    case '2':
         
    break;
    case '3':
    
    break;
    case '4':
    
    break;
    case '5':
    
    break;
    case '6':
    
    break;
    case '7':
    
    break;
    case '8':
    
    break;
    case '9':
    
    break;
    case '0':
    
    break;
    case '*':
        if (index_vis<=10){//10 por que la visualizacion son 6 datos(por fila de eeprom)
            index_vis++;        
        }else{
            index_vis=1;
        }   
    break;
    case '#':
      if (index_vis<=1){//10 por que la visualizacion son 6 datos(por fila de eeprom)
            
            index_vis=10;
        }else{
            index_vis--;
        } 
    break;
        
}   

if (flag_stop==1 && flag_busqueda==1){
    int contbusqueda=0;//indices del numero de posicion de memoria
    char g;
    char numposicion[2];
    while (flag_busqueda==1) {
        LCD_Position(0,0);
        LCD_PrintString("posicion:");
        g=Keypad_1_GetButton();
        CyDelay(200);  
        LCD_Position(0,9);
        LCD_PutChar(g);
        if (Keypad_1_GetButton()=='C'){           
            numposicion[contbusqueda]=t;
            contbusqueda++;
            if(contbusqueda<2 && Keypad_1_GetButton() =='D'){
                flag_busqueda=0;
            }
        }
        
    } 
}
 //    LCD_Position(1,5);
 //    LCD_PutChar(Keypad_1_GetButton());
     isr_press_ClearPending();
}
//busqueda no sirve para nada sirve la parte debajdo de la asigancion de botonos en la interrupcion press
void busqueda(){
   LCD_Position(0,0);
   LCD_PrintString("posicion:");
    char f=Keypad_1_GetButton();
    CyDelay(200);
    while (f!='D') {
        int contbusqueda=0;
        char num[2];
        if (contbusqueda<2){
            num[contbusqueda]=f;
            contbusqueda++;
        }else{
            
        }
    } 
    uint8 conv = f+48;
    LCD_Position(0,9);
    LCD_PutChar(f);
    
    int x=EEPROM_ReadByte(conv);
                char tx[3]="";
               sprintf(tx, "%d", x);
                LCD_Position(1,8);
                LCD_PrintString(tx);
}

///////////////////////visualizar datos////////////
void Read_Data(){
 
  for(int j=0; j<6;j++){
    Visualizacion(EEPROM_ReadByte(6*(index_vis-1))+j);

  } 

}

//funcion de visualizacion
void Visualizacion(float32 dato){
    char *data_out="";
    LCD_Position(x,y);
    sprintf(data_out,"%f.2",dato);
    LCD_PrintString(data_out);
    y++;
    if(y>12){
      y=0;
      x++;  
    }
    if(x>1){
      x=0;
    }
}
///void conversion////
void conversion_temp(){
    temperatura = ADC_CountsTo_mVolts(datos);
    temperatura = temperatura/10;
} 



////
int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    isr_timer_StartEx(Timer);
    isr_press_StartEx(press_ISR);
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    ADC_Start();
    LCD_Start();
    LCD_ClearDisplay();
      
    //LCD_Position(0,0);
    //LCD_PrintString("Iniciar");
    for(;;)
    {
      
        char dt[4]="";
       CyDelay(20);
       pin_Write(0);
       
       if(flag==1 && flag_stop!=1){
              EEPROM_Start();
              Timer_Start();
              ADC_StartConvert();
              ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
              datos=ADC_GetResult16();
              conversion_temp();
              LCD_Position(0,0);
              LCD_PrintString("Capturando...");
              sprintf(dt,"%f", temperatura);
              CyDelay(140);
               LCD_Position(1,0);
             
            LCD_PrintString(dt); //se deja milivoltios para mayor rango
       }else if(flag==1 & flag_stop==1){
                Timer_Stop();
                ADC_Stop();
                LCD_ClearDisplay();
                flag_busqueda=1;// cuando terminan los 2 minutos
                busqueda();
                
                //int x=EEPROM_ReadByte(40);
                //char tx[3]="";
                //sprintf(tx, "%d", x);
                //LCD_Position(1,8);
                //LCD_PrintString(tx);
             //   Read_Data();            
       }else{
              LCD_Position(0,0);
              LCD_PrintString("Iniciar");
      }
      if(flag_reset==1){
         flag=0;
         temperatura=0;
         EEPROM_EraseSector(1);
         Timer_Stop();
         LCD_ClearDisplay();
         flag_stop=0;
         flag_reset=0;
      }
    
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
