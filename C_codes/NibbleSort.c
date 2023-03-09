#include <stdio.h>

int main(){
	long long var = 0x0315624863152678;
	printf("%d \n",var);
	long long x = 0x0112233455666788;
	printf("%d \n",x);
	char crr[16];
	int i,j,temp;
	for(i=0;i<16;i++){
		crr[i]=((char)var&0x0F);
		var=var>>4;
	}
	printf("\n");
	for(i=0;i<16;i++){
		for(j=0;j<16;j++){
			if(crr[j]>crr[j+1]){
				temp=crr[j];
				crr[j]=crr[j+1];
				crr[j+1]=temp;
			}
		}
	}
	var=0;
	for(i=0;i<15;i++){
		var=((var)|((crr[i])&0x0F));
		var=var<<4;
	}
	var=((var)|((crr[15])&0x0F));
	printf("%d \n",var);
}