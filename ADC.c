#include<reg51.h>
void conv();
void read();
#define adc_port P2
sbit intr=P3^2;
sbit wr=P3^6;
sbit rd=P3^7;
sbit cs =P3^5;



#define LEDS P1


unsigned char adc_val,L,H,a;

void main()
{
	while(1){
		conv();
		read();
		LEDS=adc_port;
	}
}

void conv()
	{
				cs = 0;
	      wr = 0;
	      wr = 1;
	      cs = 1;
	     // while(intr);
}

 
void read(){
	cs = 0;
	rd = 0;
	adc_val = adc_port;
	rd = 1;
	cs = 1;
}

//void LCD_delay(unsigned char ms)

	
	