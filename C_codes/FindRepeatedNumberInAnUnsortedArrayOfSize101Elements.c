#include <stdio.h>

char FindRepeated(char *ptr,char size);
char FindRepeatedOptimized(char *ptr,char size);
int main(){
	char arr[101];
	char i;
	for(i=0;i<101;i++){
		arr[i]=i;
	}
	arr[50]=54;
	char xx;
	xx=FindRepeated(arr,sizeof(arr));
	printf("%d \n",arr[xx]);
	xx=FindRepeatedOptimized(arr,sizeof(arr));
	printf("%d",arr[xx]);
}
char FindRepeated(char *ptr,char size){
	char i,j;
	for(i=0;i<size;i++){
		for(j=(i+1);j<size;j++){
			if(ptr[i]==ptr[j]){
				return i;
			}
			
		}
		
	}
	return 0xff;
}
char FindRepeatedOptimized(char *ptr,char size){
	char taken[256]={0};
	char i;
	for(i=0;i<size;i++){
		if(taken[ptr[i]]==0){
			taken[ptr[i]]=1;
		}
		else{
			return i;
		}
	}
	
}
