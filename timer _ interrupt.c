#include <REG52.h>
#define TIMER0_VALUE_10mSec 0xDC00
#define TIMER0_H ((TIMER0_VALUE_10mSec & 0xFF00) >>8)
#define TIMER0_L ((TIMER0_VALUE_10mSec & 0x00FF)//)x00

sbit led0 =P1^0;
sbit led1 =P1^1;

void timer0_interrupt() interrupt 1
{
	static int cnt;
			
				//TH0 = 0xA5;
				//TL0 = 0xFF;

			if (cnt==40)
			{
				cnt=0;
				
			led0=!led0;
			}
			else
				cnt++;
		
	
}
void timer1_interrupt() interrupt 3
{
	static int cnt1;
			
				//TH0 = 0xA5;
				//TL0 = 0xFF;

			if (cnt1==120)
			{
				cnt1=0;
				
			led1=!led1;
			}
			else
				cnt1++;
		
	
}

void main()
{
	TMOD = 0x11;
	TH0 = 0xA5;
	TL0 = 0xFF;
	
	
	EA=1;
	ET0=1;
	TR0 =1;

	
		TH1 = 0xA5;
	TL1 = 0xFF;
	
	ET1=1;
	TR1=1;
	
	while(1)
	{
		
	}
}
