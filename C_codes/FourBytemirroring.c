#include <stdio.h>

typedef unsigned char u8;
typedef unsigned long int u32;

void FourBitmirroring(u32 *xx);
int main(){
	u32 x,y;
	x=0x11223344;
	y=0x44332211;
	
	FourBitmirroring(&x);
	printf("%x \n%x \n",y,x);
	
	
}
void FourBitmirroring(u32 *xx){
	u8 i=0,oo;
	u32 Copy=*xx;
	*xx=0;
	for(i=0;i<3;i++){
		oo=Copy;
		Copy=(Copy>>8);
		*xx|=oo;
		*xx=(*xx<<8);
	}
	oo=Copy;
	Copy=(Copy>>8);
	*xx|=oo;
	
	
}