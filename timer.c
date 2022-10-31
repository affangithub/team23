#include <REG52.h>
#define TIMER0_VALUE_10mSec 0xDC00
#define TIMER0_H ((TIMER0_VALUE_10mSec & 0xFF00) >>8)
#define TIMER0_L ((TIMER0_VALUE_10mSec & 0x00FF)//)x00

sbit led0 =P1^0;
sbit led1 =P1^1;


void main()
{
	int cnt=0,cnt1=0;
	TMOD = 0x11;
	TH0 = 0xA5;
	TL0 = 0xFF;
		TH1 = 0xA5;
	TL1 = 0xFF;
	
	TR0 =1;
	TR1=1;
	
	while(1)
	{
		
		if(TF0==1)
		{
			TF0=0;
			cnt++;
			
				TH0 = 0xA5;
				TL0 = 0xFF;

			if (cnt==40)
			{
				cnt=0;
				
			led0=~led0;
		}
	}
	if(TF1==1)
	{
			TF1=0;
		TH1 = 0xA5;
		TL1 = 0xFF;
		cnt1++;
	
	if(cnt1==120)
	{
		cnt1=0;
		led1=~led1;
}
}
}
}