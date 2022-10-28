/* ###################################################################
**     Filename    : Events.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2022-10-27, 14:55, # CodeGen: 0
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
**         Cpu_OnNMIINT - void Cpu_OnNMIINT(void);
**
** ###################################################################*/
/*!
** @file Events.c
** @version 01.00
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/         
/*!
**  @addtogroup Events_module Events module documentation
**  @{
*/         
/* MODULE Events */

#include "Cpu.h"
#include "Events.h"

#ifdef __cplusplus
extern "C" {
#endif 


/* User includes (#include below this line is not maintained by Processor Expert) */

/*
** ===================================================================
**     Event       :  Cpu_OnNMIINT (module Events)
**
**     Component   :  Cpu [MKL25Z128LK4]
*/
/*!
**     @brief
**         This event is called when the Non maskable interrupt had
**         occurred. This event is automatically enabled when the [NMI
**         interrupt] property is set to 'Enabled'.
*/
/* ===================================================================*/
void Cpu_OnNMIINT(void)
{
  /* Write your code here ... */
}

/*
** ===================================================================
**     Event       :  INTR0_OnInterrupt (module Events)
**
**     Component   :  INTR0 [ExtInt]
**     Description :
**         This event is called when an active signal edge/level has
**         occurred.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void INTR0_OnInterrupt(void)
{
  /* Write your code here ... */
	
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

/*
** ===================================================================
**     Event       :  INTR1_OnInterrupt (module Events)
**
**     Component   :  INTR1 [ExtInt]
**     Description :
**         This event is called when an active signal edge/level has
**         occurred.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void INTR1_OnInterrupt(void)
{
  /* Write your code here ... */
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

/* END Events */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

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
