/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-21, 12:39, # CodeGen: 0
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
#include "BitsIoLdd1.h"
#include "RS.h"
#include "BitIoLdd1.h"
#include "RW.h"
#include "BitIoLdd2.h"
#include "Enable.h"
#include "BitIoLdd3.h"
#include "SetMode.h"
#include "BitIoLdd4.h"
#include "Increment.h"
#include "BitIoLdd5.h"
#include "Decrement.h"
#include "BitIoLdd6.h"
#include "Run.h"
#include "BitIoLdd7.h"
#include "Display.h"
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
  /* Write your local variable definition here */
	unsigned char a;
	int  hh=00,mm=00,ss=00,i,p=1,temp,temp1;
	int j;
	
	a=0x14;

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/
  LCD_Init();
  Lcd_line(1);
  temp=0;
  temp1=0;
  /* Write your code here */
  /* For example: for(;;) { } */
  while(1)
  {
	 

	  if(SetMode_GetVal()==0)
	  {
		  temp++;
		  temp1++;
		  if(temp==4)
			  temp=1;
		  if(temp1==4)
			  temp1=1;
	  }
	  
	  
	  if(Increment_GetVal()==0)
	  {
		  if(temp==1)
		  {
			  hh++;
		  hour(hh);
		  if(hh==23)
			  hh=0;
			  
		
		  for(i=0;i<0x1ffff;i++);
		  }
		  else if(temp==2)
		  {
			  mm++;
			  mint(mm);
			  if(mm==59)
				  mm=0;
			
			  for(i=0;i<0x1ffff;i++);
		  }
		  else if(temp==3)
		  {
			  ss++;
			  sec(ss);
			  if(ss==59)
				  ss=0;
			 
			  for(i=0;i<0x1ffff;i++);
		  }
	  }
	  
	  
	  
	  if(Decrement_GetVal()==0)
	  {
		  if(temp1==1)
		  {
			  hh--;
		  hour(hh);
		  if(hh==0)
			  hh=23;
		
		  for(i=0;i<0x1ffff;i++);
		  }
		  else if(temp1==2)
		  {
			  mm--;
			  mint(mm);
			  if(mm==0)
				  mm=59;
			 
			  for(i=0;i<0x1ffff;i++);
		  }
		  else if(temp1==3)
		  {
			  ss--;
			  sec(ss);
			  if(ss==0)
				  ss=59;
			  
			  for(i=0;i<0x1ffff;i++);
		  }
	  }
	  
	  
	  
	  


	  if(Run_GetVal()==0)
	  {
		  j=1;
		  while(j>0)
		  {
			  hour(hh);
			  mint(mm);
			  sec(ss);

		  for(i=0;i<0xfffff;i++);
		  ss=ss+1;
		  if(ss==60)
		  {
			  mm=mm+1;
			  ss=00;
			  if(mm==60)
			  {
				  hh=hh+1;
				  mm=00;
				  if(hh==24)
				  {
					  hh=00;
					  mm=0;
					  ss=0;
				  }
			  }
		  }
		  j++;
		  }
	  }


	
	  
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
	RW_PutVal(0);
	Enable_PutVal(1);
	LCD_Delay();
	Enable_PutVal(0);
	
}
void LCD_Init()
{

	LCD_command(0x01);
	LCD_command(0x38);
	LCD_command(0x0f);
	
	LCD_command(0xc0);
	LCD_command(0x06);
	

	
	
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
	RW_PutVal(0);
	
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



void  Right_shift()
{
	LCD_command(0x14);
}

 int  hour(int hh)
 {
	
	
	  LCD_command(0x80);
	  LCD_Data((hh/10)+48);
	  LCD_command(0x81);
	  LCD_Data((hh%10)+48);
	  LCD_command(0x82);
	  lcd_puts (":");


	 
 }
 int  mint(int mm)
 {
	 LCD_command(0x83);
	  LCD_Data((mm/10)+48);
	  LCD_command(0x84);
	  LCD_Data((mm%10)+48);
	  LCD_command(0x85);
	  lcd_puts (":");

	}
 
 int sec(int ss)
 {
	 
		 LCD_command(0x86);
				  LCD_Data((ss/10)+48);
				  LCD_command(0x87);
				  LCD_Data((ss%10)+48);
				  LCD_command(0x88);
				  
				
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
