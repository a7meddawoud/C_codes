#include <stdio.h>

char FunCount();
int main(){
	
	char x=0;
	x=FunCount();
	printf("%d \n",x);
	FunCount();
	FunCount();
	FunCount();
	x=FunCount();
	printf("%d \n",x);
}
char FunCount(){
	static char Count;
	Count++;
	return Count;
}