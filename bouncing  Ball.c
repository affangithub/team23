/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-12, 12:05, # CodeGen: 0
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
#include "Bits1.h"
#include "BitsIoLdd1.h"
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
	//unsigned char ;
	int j,i,k;

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */
  while(1)
  {
	  

	 
	  j=8;
//	  f1(j);
//	 j=j-1;
//	 f1(j);
//	 j=j-1;
//	 f1(j);
//	 j=j-1;
//	 f1(j);
//	 j=j-1;
//	 f1(j);
//	 j=j-1;
//	 f1(j);
//	 j=j-1;
//	 f1(j);
//	 j=j-1;
//	 f1(j);
//	 j=j-1;
//	 f1(j);
	
for(i=1;i<=j;i++)
{
	f1(j-i);
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


void f1(int j)
{
	int p,i,q;
	unsigned char n,LED,m;
	 

	  n=0x80;
	  //a=0xF0;
	  for(p=0;p<j;p++)
	  { 
		  LED=n^(0xf0);
		  Bits1_PutVal(LED);
		  n= n>>1;
		  for(i=0;i<0x7ffff;i++); 
		  if(p==j-1)
		  {
			//  n=0x01;
			  //a=0xF0;
			  for(p=0;p<j;p++)
			  { 
				  LED=n^(0xf0);
				  Bits1_PutVal(LED);
				  n= n<<1;
				 for(i=0;i<0x7ffff;i++); 
				
				  
			  }
		  }

		  
	  }
	  
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
