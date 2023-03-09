#include <stdio.h>

typedef unsigned char u8;
typedef unsigned long int u32;
#define GIT_BIT(reg,num) ((reg>>num)&1)
void CircularShift(u32 *xx,u8 numofcirculs);
int main(){
	u32 x,y;
	x=0x10050021;
	y=0x10050021;
	CircularShift(&x,4);
	printf("%X \n%X \n",y,x);
	
	
}
void CircularShift(u32 *xx,u8 numofcirculs){
	u8 i=0;
	u32 oo;
	for(i=0;i<numofcirculs;i++){
		oo=GIT_BIT(*xx,0);
		*xx=(*xx>>1);
		*xx|=((oo<<31)&0x80000000);
	}
	
	
}