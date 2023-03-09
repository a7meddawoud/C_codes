#include <stdio.h>

//**** a special number whose sum of the factorial of digits is equal to the original number***

char CheckStrongNumber(int x);
int factorial(int y);

int main(){
	int x;
	printf("enter a num:");
	scanf("%d",&x);
	printf("%d",CheckStrongNumber(x));
}
char CheckStrongNumber(int x){
	int copy=x,res=0;
	while(copy!=0){
		res+=factorial(copy%10);
		copy/=10;
	}
	if (res==x) return 1;
	else return 0;
}
int factorial(int y){
	int i,res=1;
	for(i=1;i<=y;i++){
		res*=i;
	}
	return res;
}