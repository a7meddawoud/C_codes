#include <stdio.h>

void Sort(char *ptr,char size);
int main(){
	char ar[]={11,9,15,6,2,4,8,1,2};
	char i;
	for(i=0;i<sizeof(ar);i++){
		printf("%d ,",ar[i]);
	}
	printf(" \n");
	Sort(ar,sizeof(ar));
	for(i=0;i<sizeof(ar);i++){
		printf("%d ,",ar[i]);
	}
}
void Sort(char *ptr,char size){
	char i,j,temp;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-(1+i);j++){		//------size-(1+i)--j=0
			if(ptr[j]<ptr[j+1]){
				temp=ptr[j];
				ptr[j]=ptr[j+1];
				ptr[j+1]=temp;
			}
		}
		
	}
}