#include <stdio.h>
#include <math.h>
typedef unsigned char u8;
typedef unsigned long long u64;
u8 BitsCalculate(u64 x);
int main(){
	
	printf("%d",BitsCalculate(2566));
}
u8 BitsCalculate(u64 x){
	u8 i;
	for(i=1;i<64;i++){
		if(pow(2,i)>x){
			return i;
		}
	}
}