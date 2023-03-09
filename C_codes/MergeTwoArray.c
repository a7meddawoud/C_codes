#include <stdio.h>

char size;

void  Merge2Arrays(char *ar1,char *ar2,char size1,char size2,char *merged);
void  Merge2ArraysNoRepeatedNum(char *ar1,char *ar2,char size1,char size2,char *merged);
int main(){
	char ar[]={5,2,6,3,8};
	char arr[]={8,5,2,7,4,1};
	size=sizeof(ar)+sizeof(arr);
	char mer[size];
	Merge2ArraysNoRepeatedNum(ar,arr,sizeof(ar),sizeof(arr),mer);
	char i;
	for(i=0;i<size;i++){
		printf("%d",mer[i]);
	}
}
void  Merge2Arrays(char *ar1,char *ar2,char size1,char size2,char *merged){
	char i,j,One=1;
	for(i=0,j=0;i<size;i++,j++){
		if(i<size1){
			merged[i]=ar1[j];
		}
		if(j==(size1) && One==1){
			j=0;
			One++;
		}
		if(i>=size1){
			merged[i]=ar2[j];
		}
	}
}
void  Merge2ArraysNoRepeatedNum(char *ar1,char *ar2,char size1,char size2,char *merged){
	char i,j,One=1,taken[256]={0};
	for(i=0,j=0;i<size;i++,j++){
			if(i<size1){
				if(taken[ar1[j]]==0){
					merged[i]=ar1[j];
					taken[ar1[j]]=1;
				}
				else{
					size--;
					i--;
				}
			}
			if(j==(size1) && One==1){
				j=0;
				One++;
			}
			if(i>=size1){
				if(taken[ar2[j]]==0){
					merged[i]=ar2[j];
					taken[ar2[j]]=1;
				}
				else{
					size--;
					i--;			//***********
				}
			}
	}
}