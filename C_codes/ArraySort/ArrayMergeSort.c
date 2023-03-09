#include <stdio.h>

void merge_sort(char val[],int counter1,int counter2);
void perfrom_merge(char val[],int counter11,int counter12,int counter22,int counter21);

int main(){
	char ar[]={11,9,15,6,2,4,8,1,2};
	merge_sort(ar,0,(sizeof(ar)-1));
	char i;
	for(i=0;i<sizeof(ar);i++){
		printf("%d ,",ar[i]);
	}
}
void merge_sort(char val[],int counter1,int counter2){
	int mid;
	if(counter1<counter2)
	{
		mid=(counter1+counter2)/2;
		merge_sort(val,counter1,mid);
		merge_sort(val,mid+1,counter2);
		perfrom_merge(val,counter1,mid,mid+1,counter2);
	}
}
void perfrom_merge(char val[],int counter11,int counter12,int counter22,int counter21){
	int temp_val[50];
	int c1,c2,c3;
	c1=counter11;
	c2=counter22;
	c3=0;
	while(c1<=counter12 && c2<=counter21)
	{
		if(val[c1]<val[c2])
			temp_val[c3++]=val[c1++];
		else
			temp_val[c3++]=val[c2++];
	}
	while(c1<=counter12)
		temp_val[c3++]=val[c1++];
	while(c2<=counter21)
		temp_val[c3++]=val[c2++];
	for(c1=counter11,c2=0;c1<=counter21;c1++,c2++)
		val[c1]=temp_val[c2];
}