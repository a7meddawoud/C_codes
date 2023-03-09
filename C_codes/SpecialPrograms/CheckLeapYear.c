#include <stdio.h>

// leap year is a year having 366 days
/* every year devisible by  4 is leap year except devisible by 100 is not except devisible by 400 is leap year */

int main(){
	int year;
	printf("enter year:");
	scanf("%d",&year);
	if((year%400)==0){
		printf("is a leap year");
	}
	else if((year%100)==0){
		printf("is not a leap year");
	}
	else if((year%4)==0){
		printf("is a leap year");
	}
	else{
		printf("is not a leap year");
	}
}
