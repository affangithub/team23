#include <reg51.h>
sbit led1=P1^0;
sbit led2=P1^1;
sbit led3=P1^2;
sbit led4=P1^3;
sbit led5=P1^4;
sbit led6=P1^5;
sbit led7=P1^6;
sbit led8=P1^7;
#define LEDS P1

main()
{
	int i;
	
	while(1)
	{

		LEDS=0x00;
		for(i=0;i<100;i++);
		LEDS=0xFF;
		for(i=0;i<100;i++);
		
		
		
		

	}
	
}
		