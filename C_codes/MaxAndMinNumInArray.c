#include <stdio.h>
void MaxAndMin(char *ptr,char size);
char  max,min=127,maxIndex,minIndex;
int main(){
	char arr[]={6,2,3,5,8,6,9,11,15};
	MaxAndMin(arr,sizeof(arr));
	printf("the min val is %d with index %d \n",min,minIndex);
	printf("the max val is %d with index %d",max,maxIndex);
}
void MaxAndMin(char *ptr,char size){
	char i;
	for(i=0;i<size;i++)
	{
		if(ptr[i]>max){
			max=ptr[i];
			maxIndex=i;
		}
		if(ptr[i]<min){ //if the all the array of the same number this number will  be the max and the min  so we used two if not if else
			min=ptr[i];
			minIndex=i;		
		}
	}
}