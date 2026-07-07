#include <reg51.h>

void delay_ms(unsigned int ms){
	
	unsigned int i,j;

for(i=0;i<=ms;i++)
	{
		for(j=0;j<=1000;j++);
	}

}

void main(){
	
	unsigned char x=0x01;

while(1){
	
	P2=x;
	delay_ms(100);
	x=x<<1;
	
	if(x==0){
		
		x=0x01;
		
	}

}
}