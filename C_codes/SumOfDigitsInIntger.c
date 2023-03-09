#include <stdio.h>

typedef unsigned char u8;
char SumDigits(u8 x);
int main(){
	
	printf("%d",SumDigits(115));
	
}
char SumDigits(u8 x){
	u8 sum=0;
	while(x!=0){
		sum = sum +(x%10);
		x=x/10;
	}
	return sum;
}