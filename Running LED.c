#include <reg51.h>
int n,p;
sbit led1=P1^0;
sbit led2=P1^1;
sbit led3=P1^2;
sbit led4=P1^3;
sbit led5=P1^4;
sbit led6=P1^5;
sbit led7=P1^6;
sbit led8=P1^7;
sbit sw1 =P2^0;
sbit sw2 =P2^1;
sbit sw3 =P2^2;
sbit sw4 =P2^3;
sbit sw5 =P2^4;
sbit sw6 =P2^5;
sbit sw7 =P2^6;
sbit sw8 =P2^7;


#define LEDS P1

main()
{
	int i;
	sw1=1;
	
	while(1)
	{

 n=0x80;

		
		if(sw1==0)
		{
			
	  for(p=0;p<8;p++)
	  { 
		  LEDS=n^(0xFF);
	
		  n= n>>1;
		  for(i=0;i<0x7ff;i++); 
		
		
		}

	}
	
}
}