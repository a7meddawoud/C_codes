#include <stdio.h>
int BinarytoDecimal(int x);
int BinarytoDecimal2(int x);
int main(){
	int x;
	printf("enter Binary number:");
	scanf("%d",&x);
	printf("%d",BinarytoDecimal2(x));
}
int BinarytoDecimal(int x){
	int num=0,i;
	while(x!=0){
		num<<=1;
		i=(x%10);
		num|=(0x01&i);
		x/=10;
	}
	return num;
}
int BinarytoDecimal2(int x){
	int num=0,weight=1,y;
	while(x!=0){
		y=x%10;
		num+=(y*weight);
		weight*=2;
		x/=10;
	}
	return num;
}