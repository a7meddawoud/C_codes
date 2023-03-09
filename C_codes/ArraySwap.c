#include <stdio.h>

void ArraySwap(char *ptr,char *ptrr,char size);
int main(){
	
	char arr[]={5,2,6,8,7};
	char ar[]={8,2,5,6,1};
	int i;
	for(i=0;i<(sizeof(arr));i++){
		printf("%d,%d \n",arr[i],ar[i]);
	}
	printf("\n");
	ArraySwap(ar,arr,sizeof(arr));
	for(i=0;i<(sizeof(arr));i++){
		printf("%d,%d \n",arr[i],ar[i]);
	}
	
}
void ArraySwap(char *ptr,char *ptrr,char size){
	char i=0;
	for(i=0;i<size;i++){
		ptr[i]=ptrr[i]+ptr[i];
		ptrr[i]=ptr[i]-ptrr[i];
		ptr[i]=ptr[i]-ptrr[i];
	}
	
}