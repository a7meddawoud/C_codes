#include <stdio.h>

void varSwap(int *ptr,int *ptrr);
void varSwap2(int *ptr,int *ptrr);
void varSwap3(int *ptr,int *ptrr);
void varSwap4(int *ptr,int *ptrr);
int main(){
	int x=5;
	int y=7;
	printf("%d , %d \n",x,y);
	varSwap(&x,&y);
	printf("%d , %d \n",x,y);
	varSwap2(&x,&y);
	printf("%d , %d \n",x,y);
	varSwap3(&x,&y);
	printf("%d , %d \n",x,y);
	varSwap4(&x,&y);
	printf("%d , %d \n",x,y);
}
void varSwap(int *ptr,int *ptrr){
	int temp=*ptr;
	*ptr=*ptrr;
	*ptrr=temp;
}
void varSwap2(int *ptr,int *ptrr){
	*ptr=*ptrr+*ptr;
	*ptrr=*ptr-*ptrr;
	*ptr=*ptr-*ptrr;
}
void varSwap3(int *ptr,int *ptrr){
	*ptr=*ptr*(*ptrr);
	*ptrr=*ptr/(*ptrr);
	*ptr=*ptr/(*ptrr);
	
}
void varSwap4(int *ptr,int *ptrr){
	*ptr=*ptr^(*ptrr);
	*ptrr=*ptr^(*ptrr);
	*ptr=*ptr^(*ptrr);
}