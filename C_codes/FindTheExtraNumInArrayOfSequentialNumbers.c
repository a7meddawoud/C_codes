#include <stdio.h>
char dubnum(char *u,char size);
int main(){
	
	char a[]={1,7,2,8,3,9,4,6,5,10,12,11,13,8};		//لو مفيش رقم اكبر من السيز
	char x;
	x=dubnum(a,sizeof(a));
	printf("%d",x);
	return 0;
}

char dubnum(char *u,char size){
	char i,j,sum=0,sum2=0;
	for(i=0;i<size;i++){
		sum=sum+u[i];
		sum2=sum2+i;
	}
	return (sum-sum2);

}

/*char dubnum(char *u,char size){
	char i,j,sum=1,sum2=0;
	for(i=0;i<size;i++){
		sum=sum^u[i];
	}
	return (sum);
}*/