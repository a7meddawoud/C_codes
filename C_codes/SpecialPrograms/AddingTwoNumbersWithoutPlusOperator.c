#include <stdio.h>
void add(int num1,int num2,int* sum);
void add2(int num1,int num2,int* sum);
void add3(int num1,int num2,int* sum);
void halfadder(int a,int b,int *sum);
int main(){
	int s;
	halfadder(5,-3,&s);
	printf("%d",s);
}
void add(int num1,int num2,int* sum){ //work only for positive number
	int i;
	*sum=num1;
	for(i=0;i<num2;i++){
		(*sum)++;		//don't forget () **********
	}
}
void add2(int num1,int num2,int* sum){	//work only for positive number
	*sum=num1;
	while(num2!=0){
		(*sum)++;		//don't forget () **********
		num2--;
	}
}
void add3(int num1,int num2,int* sum){	//work for positive and negative number
	*sum=num1;
	if(num2 >= 0){
		while(num2!=0){
			(*sum)++;		//don't forget () **********
			num2--;
		}
	}
	else if(num2 <0){
		while(num2!=0){
			(*sum)--;		//don't forget () **********
			num2++;
		}
	}
}
void halfadder(int a,int b,int *sum){	//work for positive and negative number
	int carry=1;
	while(carry!=0){
		*sum = a^b;
		carry=(a&b)<<1;
		a=*sum;
		b=carry;
	}
}