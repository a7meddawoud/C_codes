#include <stdio.h>

char size,size2; 							// ********** important *********//

void RemoveDubNum(char *ptr);
int main(){
	char ar[]={2,5,3,3,2,18,55,4,20,12,13,5};
	size=sizeof(ar);
	size2=size;
	char i;
	for(i=0;i<(size);i++){
		printf("%d ",ar[i]);
	}
	printf("\n");
	RemoveDubNum(ar);
	for(i=0;i<size2;i++){
		printf("%d ",ar[i]);
	}
//	printf("\n %d %d ",size,size2);
}

void RemoveDubNum(char *ptr){
	char i,j,o,temp;
	for(i=0;i<size;i++){
		o=0;
		for(j=(i+1);j<(size2);j++){			//size2 **********************************************
			if(ptr[i]==ptr[j]){
				if(o==0){
					if(ptr[i]==ptr[j]){
				//	printf("%d -%d-> %d- %d \n ",i,j,ptr[i],ptr[j]);
					o++;			// ********** important *********//
					size2--;
					}
				}
				temp=ptr[j];
				ptr[j]=ptr[j+1];
				ptr[j+1]=temp;
			}
		}
	}
}