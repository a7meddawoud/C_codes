#include<stdio.h>

void SwapAndreverse(char *ptr,char *ptrr,char size);

int main(){
	char ar[]={5,2,6,8,7,9,3};
	char arr[]={3,2,8,4,6,9,8};
	SwapAndreverse(ar,arr,sizeof(ar));
	char i;
	for(i=0;i<sizeof(ar);i++){
		printf("%d ,",ar[i]);
	}
	printf("\n");
	for(i=0;i<sizeof(ar);i++){
		printf("%d ,",arr[i]);
	}
}
void SwapAndreverse(char *ptr,char *ptrr,char size){
	char i,j=(size-1),temp;
	for(i=0;i<size;i++,j--){
		temp=ptr[j];
		ptr[j]=ptrr[i];
		ptrr[i]=temp;
	}
	
}