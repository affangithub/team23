#include <reg51.h>

//sbit led_main=P1^0;
//sbit led_intr0=P1^1;
//sbit led_intr1=P1^2;


sbit led1=P0^0;
sbit led2=P0^1;
sbit led3=P0^2;
sbit led4=P0^3;
sbit led5=P0^4;
sbit led6=P0^5;
sbit led7=P0^6;
sbit led8=P0^7;

sbit led11=P1^0;
sbit led12=P1^1;
sbit led13=P1^2;
sbit led14=P1^3;
sbit led15=P1^4;
sbit led16=P1^5;
sbit led17=P1^6;
sbit led18=P1^7;

sbit led21=P2^0;
sbit led22=P2^1;
sbit led23=P2^2;
sbit led24=P2^3;
sbit led25=P2^4;
sbit led26=P2^5;
sbit led27=P2^6;
sbit led28=P2^7;


#define LEDS P0
#define LEDS1 P1
#define LEDS2 P2

void delay1()
{
	int k,j;
	for(k=0;k<10000; k++)
	{
		for(j=0;j<1000;j++);
}
}
void delay()
{
	int j,k;
	
	
		for(k=0;k<10000;k++)
			for(j=0;j<1000;j++);

}

void intr0_external() interrupt 0
{
		int i,n,p;
		n=0x80;


			
	  for(p=0;p<8;p++)
	  { 
		  LEDS1=n^(0xFF);
	
		  n= n>>1;
		  delay1();
		
		
		
		

	}
}
void intr1_external() interrupt 2
{
	int i,n,p;
		n=0x80;


			
	  for(p=0;p<8;p++)
	  { 
		  LEDS2=n^(0xFF);
	
		  n= n>>1;
		  delay1();
	}
}


void right()
{
		int n,i;
		n=0x80;
		for(i=0;i<7;i++)
		{
		  LEDS=n^(0xFF);
		n= n>>1;
			delay();
		}
	
}



int main()
{
	int i;
		int n=0x80;
	EA=1;
	EX0=1;
	IT0=1;
	EX1=1;
	IT1=1;


	
	while(1)
	{

		right();
	


	}
}

		
	