#include <stdio.h>
	char arr[10];
void sentFrame(char *ptr);
char receiveFrame(char *ptr);
int main(){
	char send[]={8,9,10,255,255,255,255,255};
	char receive[8];
	sentFrame(send);
	printf("%d",receiveFrame(receive));
}
void sentFrame(char *ptr){
	char i;
	int sum=0;
	for(i=0;i<8;i++){
		arr[i]=ptr[i];
		sum=sum+ptr[i];
	}
	arr[8]=(sum&0x0F);
	arr[9]=((sum>>4)&0x0F);
}
char receiveFrame(char *ptr){
	char i;
	int sum=0;
	for(i=0;i<8;i++){
		ptr[i]=arr[i];
		sum=sum+arr[i];
	}
	if(sum==(arr[8])|((int)arr[9])<<4){
		return 1;
	}
	else{
		return 0;
	}
}