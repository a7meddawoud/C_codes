#include <stdio.h>

void PointerSwap(int **xptr,int **xptrr);
int main(){
	int x=5,y=3;
	int *ptr=&x;
	int *ptrr=&y;
	printf("%d, %d \n",x,y);
	printf("%d, %d \n",*ptr,*ptrr);
	PointerSwap(&ptr,&ptrr);
	printf("%d, %d \n",x,y);
	printf("%d, %d \n",*ptr,*ptrr);
	
}
void PointerSwap(int **xptr,int **xptrr){
	int *temp=*xptr;
	*xptr=*xptrr;
	*xptrr=temp;
};