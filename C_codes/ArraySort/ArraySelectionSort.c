#include <stdio.h>

void arraySort(char *ptr,char size);

int main(){
	char ar[]={11,9,15,6,2,4,8,1,2};
	arraySort(ar,sizeof(ar));
	char i;
	for(i=0;i<sizeof(ar);i++){
		printf("%d ,",ar[i]);
	}
}
void arraySort(char *ptr,char size){
	char i,j,max,temp;
	for(i=0;i<size-1;i++){
		max=i;
		for(j=(i+1);j<size;j++){
			if(ptr[j]>ptr[max]){
				max=j;
			}
		}
		if(i!=max){
			temp=ptr[i];
			ptr[i]=ptr[max];
			ptr[max]=temp;	
		}
	}
	
}