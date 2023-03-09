#include <stdio.h>

//******** number that is the sum of its own digits each raised to the power of the number of digits equal to the number *****
char CheckArmstrongNumber(int x);
int main(){
	int x;
	printf("enter num:");
	scanf("%d",&x);
	printf("%d",CheckArmstrongNumber(x));
}
char CheckArmstrongNumber(int x){
	int cop2=x,copy=x,y=1,j=1,res=0;
	while(copy!=0){
		y=copy%10;
		copy/=10;
		j=1;		//****
		cop2=x;		//****
		while(cop2!=0){
			j=j*y;
			cop2/=10;
		}
		res+=j;
	}
	if(res==x){
		return 1;
	}
	else return 0;
}