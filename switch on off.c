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




main()
{
	int i;
	sw1=1;
	sw2=1;
	sw3=1;
	sw4=1;
	sw5=1;
	sw6=1;
	sw7=1;
	sw8=1;
	
	while(1)
	{

		for(i=1;i<=8;i++)
		{
			
		if(sw1==0)
			sw1=0;
		else if(sw2==0)
			sw2=0;
		else if(sw3==0)
			sw3=0;
		else if(sw4==0)
		sw4=0;
		else if(sw5==0)
			sw5=0;
		else if(sw6==0)
			sw6=0;
		else if(sw7==0)
			sw7=0;
		else if(sw8==0)
			sw8=0;
		
		
		
		
			

	
	
    }
  }
}