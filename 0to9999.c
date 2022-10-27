/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-18, 09:29, # CodeGen: 0
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
#include "Bits2.h"
#include "BitsIoLdd2.h"
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
	int i,p,n[20],q,j,k,m,r,l,h;

	unsigned char x,y,z,w ;

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */
	n[0]= 0x3F;
	n[1]=0x06;
	n[2]=0x5B;
	n[3]=0x4F;
	n[4]=0x66;
	n[5]=0x6D;
	n[6]=0x7D;
	n[7]=0x07;
	n[8]=0x7F;
	n[9]=0x6F;
	n[10]=0xF7;
	n[11]=0xfF;
	n[12]=0xB9;
	n[13]=0xBF;
	n[14]=0xF9;
	n[15]=0xF1;
while(1)
{


		
		for(l=0;l<=9;l++)
		{
			x=n[l]^0xff;

			
			for(j=0;j<=9;j++)
			{

				y=n[j]^0xff;

				
				for(k=0;k<=9;k++)
				{

					z=n[k]^0xff;

					
					
					for(m=0;m<=9;m++)
					{
						for(h=0;h<100;h++)
						{


							Bits2_PutVal(0xfE);	
							Bits1_PutVal(x);

						for(i=0;i<0x1fff;i++);

							Bits2_PutVal(0xfD);
							Bits1_PutVal(y);

						for(i=0;i<0x1fff;i++);
							Bits2_PutVal(0xfB);
							Bits1_PutVal(z);

						for(i=0;i<0x1fff;i++);

						w=n[m]^0xff;
							Bits2_PutVal(0xf7);
							Bits1_PutVal(w);
						for(i=0;i<0x1fff;i++);

					
						}
					}
				}
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
