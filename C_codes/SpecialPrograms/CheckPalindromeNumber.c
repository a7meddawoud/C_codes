#include <stdio.h>

//***** a number (such as 16461) that remains the same when its digits are reversed ********

char CheckPalindromeNumber(int num);
int main(){
	int x;
	printf("enter num:");
	scanf("%d",&x);
	printf("%d",CheckPalindromeNumber(x));
	
}
char CheckPalindromeNumber(int num){
	int copy=0,copy2=num;
	while(num!=0){
		copy*=10;			// before copy+=(num%10); ***********
		copy+=(num%10);
		num/=10;
	}
	if(copy==copy2){
		return 1;
	}
	else return 0;
}