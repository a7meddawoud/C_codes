#include <stdio.h>
void ArrCopy(char *ptr,char size,char *copy);
int main(){
	char arr[]={2,2,5,1,3,6,7,5,2,0,11,1,0};
	char cop[sizeof(arr)];
	ArrCopy(arr,sizeof(arr),cop);
	int i=0;
	while(cop[i]!='F'){
		printf("%d",cop[i]);
		i++;
	}
}
void ArrCopy(char *ptr,char size,char *copy){
	char check[256]={0};
	int i=0,j=0;
	for(i=0;i<size;i++){
		if(check[ptr[i]]==0){
			copy[j++]=ptr[i];
			check[ptr[i]]=1;
			
		}
	}
	copy[j]='F';
}