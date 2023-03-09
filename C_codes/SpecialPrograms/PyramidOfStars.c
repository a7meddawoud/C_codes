#include <stdio.h>

void printPyramid(int x);
void printPyramid2(int x);
int main(){
	int x;
	printf("Enter Number of rows:");
	scanf("%d",&x);
	printPyramid2(x);
	
}
void printPyramid(int x){
	int i=0,j=0,k=0,m=1;
	while(i<x){
		while(j<(x-i)){
			printf(" ");
			j++;
		}
		while(k<(m)){
			printf("*");
			k++;
		}
		m+=2;
		j=0;
		k=0;
		printf("\n");
		i++;
	}
	
	
}
void printPyramid2(int x){
	int j,i;
	for(i=1;i<=x;i++){				//i&j = 1 ***********
		for(j=1;j<=((2*x)-1);j++){
			if(j>x-(i) && j<x+(i)){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}	
}