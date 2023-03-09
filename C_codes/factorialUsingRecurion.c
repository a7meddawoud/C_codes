#include <stdio.h>
int factorial(int x);
int main(){
	int y;
	printf("Enter a Num");
	scanf("%d",&y);
	printf("%d",factorial(y));
}
int factorial(int x){
	if(x==1){
		return 1;
	}
	else return x * factorial(x -1);
	
}