#include <stdio.h>

#define GET_BIT(reg,num) ((reg>>num)&1)
void reversebits(char *x);
int main(){
	char u=0b11010010;
	char x=0b01001011;
	printf("%d,%d \n",x,u);
	reversebits(&u);
	printf("%d,%d",x,u);
}
void reversebits(char *x){
	char copy=*x,i;
	*x=0;
	for(i=0;i<7;i++){		//----------7 Not 8
		*x|=GET_BIT(copy,0);
		*x=(*x<<1);
		copy=(copy>>1);
	}
	*x|=GET_BIT(copy,0);   //-----------
}