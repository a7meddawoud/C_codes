#include <stdio.h>

typedef unsigned short int u16;
typedef unsigned char u8;
int main(){
	u16 x=0x2255;
	u8 y=x;
	printf("%x",y);   /*output is 55 so it is Little-endian (order in which the "little end" 
	(least significant value in the sequence)) is stored first.*/
	
	
	
}
