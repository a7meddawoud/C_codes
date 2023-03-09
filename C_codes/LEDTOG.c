#include <stdio.h>
#include <util/delay.h>

typedef unsigned char u8;
#define SET_BIT(reg,num)	(reg|=(1<<num))
#define TOG_BIT(reg,num)	(reg^=(1<<num))

#define DDRA (*(volatile u8*)0x3A)
#define PORTA (*(volatile u8*)0x3B)


int main(){
	SET_BIT(DDRA,3);
	while(1){
		TOG_BIT(PORTA,3);
		_delay_ms(250);
	}
	
}