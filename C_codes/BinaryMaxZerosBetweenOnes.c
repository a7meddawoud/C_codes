#include <stdio.h>

#define GET_BIT(reg,num)	((reg>>num)&1)
char maxzeros(int x);
int main(){
	int x=0b000010001;
	char y;
	y=maxzeros(x);
	printf("%d , %d",x,y);
}
char maxzeros(int x){
	int i;
	char counter=0 , maxcount=0;
	for(i=0;i<32;i++){
		if(GET_BIT(x,i)==1){
			i++;
			while(GET_BIT(x,i)==0 && i<32){
				counter++;
				i++;
			}
			if(counter>maxcount && i<32){		//********* & *****
			maxcount=counter;
			}
			if(GET_BIT(x,i)==1){
				counter=0;
			}
		}
		i--;                  //*********
	}
	return maxcount;
	
}