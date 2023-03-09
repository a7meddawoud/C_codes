#include <stdio.h>
char MaxInput(char x);
int main(){
	MaxInput(7);
	MaxInput(8);
	MaxInput(2);
	printf("%d",MaxInput(5));
	
}
char MaxInput(char x){
	static char y;
	if(x>y){
		y=x;
	}
	return y;
}