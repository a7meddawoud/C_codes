#include <stdio.h>

void BIT_TOG(char *x,char num);
int main(){
	char x=1;
	BIT_TOG(&x,0);
	BIT_TOG(&x,1);
	printf("%d",x);
	 
}
void BIT_TOG(char *x,char num){
	*x^=(1<<num);
}