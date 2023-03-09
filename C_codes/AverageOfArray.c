#include <stdio.h>
char avOfArr(char *ptr,char size);
int main(){
	char x;
	char ar[]={2,4,2,4,2,4,2,4};
	x=avOfArr(ar,sizeof(ar));
	printf("%d",x);
}
char avOfArr(char *ptr,char size){
	char i,sum=0;
	for(i=0;i<size;i++){
		sum=sum+ptr[i];
	}
	return (sum/size);
}