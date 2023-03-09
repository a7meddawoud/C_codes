#include <stdio.h>
typedef unsigned char u8;   // متنساش تخليها unsigned 
u8 AddNum(u8 x,u8 y);
int main(){

	printf("%d",AddNum(255,4));
	
}
u8 AddNum(u8 x,u8 y){
	if(x<(255-y)){
		return x+y;
	}
	else {
		return 0;
	}
}