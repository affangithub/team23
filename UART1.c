#include<reg51.h>
#define Baud_rate 0xFA

void SendByteSerially(unsigned char ascii);
unsigned char ReceiveByteSerially(void);
 print_str( char *string);


void main(void)
{
	char *str="Hello BOSCH";
	unsigned char serialdata;
  TMOD = (( TMOD & 0x0F ) | 0x20);
	SCON = 0x50;
	TH1 = Baud_rate;
	TR1 = 1;
	
	//for(;;)
//	{
		///serialdata = ReceiveByteSerially();
	//	SendByteSerially('H');
   print_str(str);
	//}
}
 print_str( char *string)
{
	while(*string)
	{
		
	SendByteSerially(*string);
		*string++;
	}
}


void SendByteSerially(unsigned char serialdata)
{

	SBUF = serialdata;
	while(TI ==0);
	TI = 0;
}

unsigned char ReceiveByteSerially(void)
{

	while (RI ==0);
	RI=0;
	return SBUF;
}

	
	
	
	
