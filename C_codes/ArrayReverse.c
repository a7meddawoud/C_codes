#include <stdio.h>
void reverseArray(char *ptr,char size);
int main(){
	char ar[]={2,5,8,3,6,9};
	reverseArray(ar,sizeof(ar));
	char i;
	for(i=0;i<sizeof(ar);i++){
		printf("%d ,",ar[i]);
	}
}
void reverseArray(char *ptr,char size){
	char i,temp,j=(size-1);
	for(i=0;i<j;i++,j--){		//i<j *****
		temp=ptr[j];
		ptr[j]=ptr[i];
		ptr[i]=temp;
	}
}