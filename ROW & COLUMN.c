/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-20, 09:55, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file ProcessorExpert.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup ProcessorExpert_module ProcessorExpert module documentation
**  @{
*/         
/* MODULE ProcessorExpert */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "Display.h"
#include "BitsIoLdd1.h"
#include "RS.h"
#include "BitIoLdd1.h"
#include "Bit2.h"
#include "BitIoLdd2.h"
#include "Enable.h"
#include "BitIoLdd3.h"
#include "column.h"
#include "BitsIoLdd2.h"
#include "row.h"
#include "BitsIoLdd3.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
//	void  LCD_Init();
//	void  LCD_Data();
//	void  LCD_Delay();
//	void LCD_command();
  /* Write your local variable definition here */
	unsigned char a,b;
	int i,p,asc1,asc2;
	  unsigned char ch;

	

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/
  LCD_Init();
  
  /* Write your code here */
  /* For example: for(;;) { } */
  
  while(1)
  {

	  
	  Lcd_line(1);
	
		column_SetDir(1);
		row_SetDir(1);
		column_PutVal(0x0);
		row_PutVal(0xf);
		row_SetDir(0);
		b=row_GetVal();
		     //column
		keypad(b);
		
		
		  Lcd_line(2);
		column_SetDir(1);
		row_SetDir(1);
		column_PutVal(0xf);
		row_PutVal(0x0);
		
		column_SetDir(0);
		a=column_GetVal();   //row
	
		keypad(a);
	
		
		
		

	  

	  
  }

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/


void LCD_Data(unsigned char y)
{
	
	Display_PutVal(y);
	RS_PutVal(1);
	Bit2_PutVal(0);
	Enable_PutVal(1);
	LCD_Delay();
	Enable_PutVal(0);
	
	
}
void LCD_Init()
{

	LCD_command(0x01);
	LCD_command(0x38);
	LCD_command(0x0C);
	
	LCD_command(0x06);

//	LCD_command(0x80);

	
	
}

void LCD_Delay()
{
	int i;
	for(i=0;i<0x7fff;i++);
	
}

void LCD_command(unsigned char x)
{
	Display_PutVal(x);
	RS_PutVal(0);
	Bit2_PutVal(0);
	
	Enable_PutVal(1);
	 LCD_Delay();
	Enable_PutVal(0);
}
void lcd_puts (unsigned char *lcd_string)
{
	while(*lcd_string)
	{
		LCD_Data(*lcd_string++);
	}
}

void Lcd_line(int i)
{
	if(i==1)
		
	{
		LCD_command(0x80);
	}
	else if(i==2)
	{
		LCD_command(0xc0);
	}
}
void keypad(unsigned char i)
{

	if(i==0x0E)
		 LCD_Data('1');
	else if(i==0x0D)
		 LCD_Data('2');
	else if(i==0x0B)
		 LCD_Data('3');
	else if(i==0x07)
		 LCD_Data('4');

	  
}

/* END ProcessorExpert */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.08]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
