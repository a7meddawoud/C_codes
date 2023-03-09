#include <stdio.h>

void printfloydTriangle();
int main(){
	int x;
	printf("enter num of rows:");
	scanf("%d",&x);
	printfloydTriangle(x);
}


void printfloydTriangle(int n){
	char counter=1,i,j;
	for(i=1;i<=n;i++){		//i=1
		for(j=0;j<i;j++){
			printf("%d ",counter);
			counter++;
		}
		printf("\n");
	}
}