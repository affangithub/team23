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
	unsigned char n,LED,a;
	int i,p;

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */
  while(1)
  {
	  
	 // Bit1_PutVal(1);
	 // Bit2_PutVal(1);
	 // Bit3_PutVal(1);
	 // Bit4_PutVal(1);
	  
	 // Bit5_PutVal(0);
	//  Bit6_PutVal(0);
	 // Bit7_PutVal(0);
	 // Bit8_PutVal(0);
	//  for(i=0;i<0x7ffff;i++);
	//  Bit1_PutVal(0);
	//  Bit2_PutVal(0);
	  //Bit3_PutVal(0);
	//  Bit4_PutVal(0);
	  
	//  Bit5_PutVal(1);
	//  Bit6_PutVal(1);
	//  Bit7_PutVal(1);
	//  Bit8_PutVal(1);
	//  for(i=0;i<0x7ffff;i++);
	  
	// Blinking All  LED 
	//  Bits1_PutBit(0,1);
	 // Bits1_PutBit(1,1);
	//  Bits1_PutBit(2,1);
	//  Bits1_PutBit(3,1);
	//  Bits1_PutBit(4,0);
	//  Bits1_PutBit(5,0);
	 // Bits1_PutBit(6,0);
	//  Bits1_PutBit(7,0);
	  
	//  for(i=0;i<0x7ffff;i++);
	  
	  //    Bits1_PutBit(0,0);
	 //	  Bits1_PutBit(1,0);
	 //	  Bits1_PutBit(2,0);
	 //	  Bits1_PutBit(3,0);
	 //	  Bits1_PutBit(4,1);
	 //	  Bits1_PutBit(5,1);
	 //	  Bits1_PutBit(6,1);
	 //	  Bits1_PutBit(7,1);
	 	  
	 //	 for(i=0;i<0x7ffff;i++);
	  
	//  Bits1_PutVal(0xF1);
	  
	  
	 // Bits1_PutB(0xf1);
	  //Bits1_SetBit(7);
	 // for(i=0;i<0x7ffff;i++);
	  
	//  Bits1_PutVal(0xF2);
	 // Bits1_ClrBit(0);
	//  for(i=0;i<0x7ffff;i++);
	  
	//  Bits1_PutVal(0xF4);
	 // Bits1_ClrBit(1);
	//  for(i=0;i<0x7ffff;i++);
	  
	//  Bits1_PutVal(0xF8);
	  //Bits1_ClrBit(2);
	//  for(i=0;i<0x7ffff;i++);
	  
	  
	  //Bits1_ClrBit(4);
	  //Bits1_ClrBit(3);
	  //for(i=0;i<0x7ffff;i++);
	 // Bits1_PutVal(0xE0);
	  //Bits1_ClrBit(5);
	 // for(i=0;i<0x7ffff;i++);
	 // Bits1_PutVal(0xD0);
	 // Bits1_ClrBit(6);
	 // for(i=0;i<0x7ffff;i++);
	 // Bits1_SetBit(0x40);
	  //Bits1_ClrBit(7);
	 // for(i=0;i<0x7ffff;i++);
	  //Bits1_SetBit(0x80);
	//  for(i=0;i<0x7ffff;i++);
	 	  
	 // Bits1_PutVal(0xB0);
	  //for(i=0;i<0x7ffff;i++);
	  
	//  Bits1_PutVal(0x70);
	//  C
	  n=0x01;
	  //a=0xF0;
	  for(p=0;p<8;p++)
	  { 
		  LED=n^(0xf0);
		  Bits1_PutVal(LED);
		  n= n<<1;
		  for(i=0;i<0x7ffff;i++); 
		
		  
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
