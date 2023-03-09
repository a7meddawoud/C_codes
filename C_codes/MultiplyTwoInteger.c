#include <stdio.h>

typedef unsigned int u16;

char MultiplyTwoInteger(u16 num1,u16 num2,u16 *ptr);
int main(){
	u16 x=10;
	u16 y=20;
	u16 mul;
	MultiplyTwoInteger(x,y,&mul);
	printf("%d",mul);
	
}
char MultiplyTwoInteger(u16 num1,u16 num2,u16 *ptr){
	if(num1<(65535/num2)){
		*ptr=num1*num2;
		return 1;
	}
	return 0;
}