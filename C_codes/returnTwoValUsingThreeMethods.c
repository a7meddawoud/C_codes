#include <stdio.h>

char sum1,multi1;

typedef struct sd{
	char Sum,Add;
}ssd;
void SumAndMulti(char val1,char val2,char *sum,char *multi);
void SumAndMulti1(char val1,char val2);
void SumAndMulti2(char *arr);
ssd SumAndMulti3(char val1,char val2);
int main(){
	ssd mum;
	mum=SumAndMulti3(5,5);
	printf("%d ,%d \n",mum.Add,mum.Sum);
	char arr[4];
	arr[0]=5;
	arr[1]=6;
	SumAndMulti2(arr);
	printf("%d ,%d \n",arr[2],arr[3]);
	SumAndMulti1(5,7);
	printf("%d ,%d \n",sum1,multi1);
	char x,y;
	SumAndMulti(5,8,&x,&y);
	printf("%d ,%d \n",x,y);
}
void SumAndMulti(char val1,char val2,char *sum,char *multi){
	*sum=val1+val2;
	*multi=val1*val2;
}
void SumAndMulti1(char val1,char val2){
	sum1=val1+val2;
	multi1=val1*val2;
}
void SumAndMulti2(char *arr){
	arr[2]=arr[0]+arr[1];
	arr[3]=arr[0]*arr[1];
}
ssd SumAndMulti3(char val1,char val2){
	ssd hm;
	hm.Sum=val1*val2;
	hm.Add=val1+val2;
	return hm;
}
