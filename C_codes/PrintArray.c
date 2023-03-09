#include <stdio.h>
void PrintArr(char *ptr , char size);
int main(){
	char arr[]={1,5,6,8,6,8};
	PrintArr(arr,sizeof(arr));
	
}
void PrintArr(char *ptr , char size){
	int i=0;
	for(i=0;i<size;i++){
		printf("%d ,",ptr[i]);
		
	}
	printf("\n");
	
}