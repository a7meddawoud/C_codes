#include <stdio.h>

// equal to the sum of their “proper” divisors , For example, 6 = 3 + 2 + 1 **************

char CheckPerfectNumber(int x);
int main(){
	printf("Enter A Num :");
	int x;
	scanf("%d",&x);
	printf("%d",CheckPerfectNumber(x));
}
char CheckPerfectNumber(int x){
	int i , sum=0;
	for(i=1;i<x;i++){
		if(x%i == 0){
			sum+=i;
		}
	}
	if(sum==x) return 1;
	else return 0;
}