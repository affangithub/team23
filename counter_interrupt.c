#include <REG52.h>
#define TIMER0_VALUE_10mSec 0xDC00
#define TIMER0_H ((TIMER0_VALUE_10mSec & 0xFF00) >>8)
#define TIMER0_L ((TIMER0_VALUE_10mSec & 0x00FF)//)x00

sbit led0 =P1^0;
sbit led1 =P1^1;

void timer0_external() interrupt 1
{
	led0=!led0;
}
void timer1_external() interrupt 3
{
	led1=!led1;
	
}

void main()
{
	TMOD = 0x55;
	TH0 = 0xA5;
	TL0 = 0xFF;
	
	
	EA=1;
	EX0=1;
	IT0=1;
	EX1=1;
	IT1=1;

	TR0 =1;

	
	TH1 = 0xA5;
	TL1 = 0xFF;
	
	ET1=1;
	TR1=1;
	
	while(1)
	{
		
		}
}
