#include <stdio.h>

void MoveNum(char *ptr,char num,char size);
int main(){
	char ar[]={1,2,5,7,1,1,3,1,7};
	MoveNum(ar,1,sizeof(ar));
	char i;
	for(i=0;i<sizeof(ar);i++){
		printf("%d",ar[i]);
	}
}
void MoveNum(char *ptr,char num,char size){
	char i=0,j,temp,count=0;
	for(i=0;i<(size-count);i++){
		if(ptr[i]==num){
			//printf("%d",i);
			count++;
			for(j=i;j<(size-1);j++){
				temp=ptr[j];
				ptr[j]=ptr[j+1];
				ptr[j+1]=temp;  //------ =temp ********
			}
			i--;  //**********عشان لو في واحدين جمب بعض *************
		}
	}

}