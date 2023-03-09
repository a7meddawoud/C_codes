#include <stdio.h>

char reNum();

int main(){
	int x;
	printf("Enter a num");
	scanf("%d",&x);
	printf("%d",reNum(x));
}
char reNum(int x){
	char taken[10]={0};			// 10 only*****
	while(x!=0){
		if(taken[x%10]==0){
			taken[x%10]=1;
		}
		else if(taken[x%10]==1){
			return x%10;
		}
		x/=10;
	}
	return 0xff;
}