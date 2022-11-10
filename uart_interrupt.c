#include<stdio.h>
#include<stdlib.h>
#include<reg51.h>

void delay(int);
void print_str(char*);

sbit LED = P1^0;
bit bTx_flag =0;
bit bRx_flag =0;

volatile char ch;

 void ser_int() interrupt 4
 {
	 if(T1)
	 {
		 bTx_flag=1;
		 TI=0;
	 }
	 else if (RI)
	 {
		 ch=SBUF;
		 
		 bRx_flag=1;
		 RI=0;
	 }
 }
 void main()
 {
	 char 
	 
	 SCON=0x50;
	 TMOD=0x20;
	 TH1=0xfa;
	 TR1=1;
	 
	 EA=1;
	 ES=1;
	 
	 while(1)
	 {
		 if(bRx-flag)
		 {
			 SBUF=ch;
			 bTx_flag=0;
			 
			 while(bTx_flag==0);
			 
			 bTx_flag=0;
			 //delay(1000);
			 bRx_flag=0;
		 }
	 }
 }
 
 void print