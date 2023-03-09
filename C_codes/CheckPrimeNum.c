#include <stdio.h>

char PrimeNum(char num);
int main(){
	char x;
	printf("enter Number :");
	scanf("%d",&x);
	if(PrimeNum(x)==0){
		printf("\n Not prime Num");
	}
	else{
		printf("\n prime Num");
	}
	
}
char PrimeNum(char num){
	char i;
	for(i=2;i<num;i++){
		if((num%i)==0){
			return 0;
		}
		
	}
	return 1;
	
}