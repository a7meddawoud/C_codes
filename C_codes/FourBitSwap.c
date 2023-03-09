#include <stdio.h>

typedef unsigned char u8 ;

void BitsSwap(u8 *xx);
int main(){
	u8 y=213;
	printf("%X \n",y);
	BitsSwap(&y);
	printf("%X \n",y);
}
void BitsSwap(u8 *xx){
	
	*xx=((*xx<<4)&0xF0)|((*xx>>4)&0x0F);
	
}