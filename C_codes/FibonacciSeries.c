#include <stdio.h>

typedef unsigned long int u32;
void FibonacciSeries(u32 End);
void FibonacciSeries2(int n);
int FibonacciSeriesRecursion(int n);
int main(){
	
	
	FibonacciSeries(377);
	FibonacciSeries2(6);
}
void FibonacciSeries(u32 End){
	u32 Num1=1 ,Num2=1,Sum=0;
	while(Sum<End){
		Sum=Num1+Num2;
		printf("%d + %d = %d \n",Num2,Num1,Sum);
		Num2=Sum;
		Sum=Num1+Num2;
		printf("%d + %d = %d \n",Num1,Num2,Sum);
		Num1=Sum;
	}
	
}
void FibonacciSeries2(int n){		//************
	char i;
	u32 Num1=0 ,Num2=1,Sum=1;
	for(i=0;i<n;i++){
		Sum=Num1+Num2;
		Num2=Num1;
		Num1=Sum;
		printf("%d + %d = %d \n",Num2,Num1,Sum);
	}
}

int FibonacciSeriesRecursion(int n){
	if(n ==0) return 0;
	if(n==1 || n==2) return 1;
	else FibonacciSeriesRecursion(n-1) + FibonacciSeriesRecursion(n-2);	
	
}