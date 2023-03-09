#include <stdio.h>

char arrComp(char *arr1,char *arr2,char size);
int main(){
	char ar1[]={2,5,6,2,4};
	char ar2[]={2,5,3,6,4};
	printf("%d",arrComp(ar1,ar2,sizeof(ar1)));
}
char arrCompWithOrder(char *arr1,char *arr2,char size){
	char i;
	for(i=0;i<size;i++){
		if(arr1[i]!=arr2[i]){
			return 0;
		}
	}
	return 1;
	
}
char arrComp(char *arr1,char *arr2,char size){
	char j,i,counter=0;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(arr1[i]==arr2[j]){
				arr2[j]=0;		//-----عشان لو في رقم متكرر مرتين  ******************** 
				counter++;
				break;
			}
		}
	}
	if(counter==size){
		return 1;
	}
	else{
		return 0;
	}
	
}