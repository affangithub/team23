/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-11-07, 09:52, # CodeGen: 0
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
#include "LED1.h"
#include "BitsIoLdd1.h"
#include "LED2.h"
#include "BitsIoLdd2.h"
#include "LED3.h"
#include "BitsIoLdd3.h"
#include "LED4.h"
#include "BitsIoLdd4.h"
#include "FRTOS1.h"
#include "MCUC1.h"
#include "UTIL1.h"
#include "UTIL2.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */


void Task1()
{
  	while(1)
  	{

  		right();

  	}
}
void Task2()
{
	while(1)
	{
		int p,j,k;
		unsigned char n,m;
				n=0x80;


					
			  for(p=0;p<8;p++)
			  { 
				 
				  m=n^(0xff);
				  LED2_PutVal(m);
				  n= n>>1;
				  for(k=0;k<0XFFfFF;k++);

				 
			}
	}
}
void Task3()
{
	while(1)
	{
		int p,j,k;
		unsigned char n,m;
				

				  n=0x8;
				  for(j=0;j<4;j++)
				  {
					  m=n^(0xf);
					  LED4_PutVal(m);
					  n= n>>1;
					  for(k=0;k<0XfFFFF;k++);
					  if(j==3)
						  LED4_PutVal(0xf);
				  }
				  n=0xf7;
			  for(p=0;p<4;p++)
			  { 
				 
				  m=n^(0xff);
				  LED3_PutVal(m);
				  n= n>>1;
				  for(k=0;k<0XfFFFF;k++);
				  if(p==3)
					  LED3_PutVal(0x00);
					  

				 
			}
	}
}
/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */
//Task2();
//Task1();
//Task3();

  xTaskCreate(Task1,"Task1",100,NULL,13,NULL);
  xTaskCreate(Task2," Task2",100,NULL,13,NULL);
  xTaskCreate(Task3," Task3",100,NULL,13,NULL);
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


void right()
{
		int i;
		unsigned char m,n;
		n=0x80;
		for(i=0;i<8;i++)
		{
		  m=n^(0x00);
		  LED1_PutVal(m);
		n= n>>1;
			delay();
			
		}
		
		
	
}


void delay()
{
	int k;
	
	
		for(k=0;k<0XFFFFF;k++);
			

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
