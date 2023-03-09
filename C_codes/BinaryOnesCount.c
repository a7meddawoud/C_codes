#include <stdio.h>

#define GET_BIT(reg,num)  ((reg>>num)&1)
char OnesCount(unsigned char x);

int main(){
	unsigned char i = 0;
	i=OnesCount(221);
	printf("%d",i);
}
//this function is used to count max num of countinous ones
char OnesCount(unsigned char x){
	char i=0,counter=0,maxcount=0;
	while(x!=0){
		if(GET_BIT(x,i)==1){
			counter++;
		}
		else if(GET_BIT(x,i)==0){
			if(counter>maxcount){
				maxcount=counter;
			}
			counter=0;
		}
		x=(x>>1);
	}
	
	return maxcount;
}