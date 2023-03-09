#include <stdio.h>

void reverse(int *ptr);
int main(){
	int x =132;
	printf("%d \n",x);
	reverse(&x);
	printf("%d \n",x);
	
}
void reverse(int *ptr){
	int y=*ptr,i,counter =0;
	while(y!=0){
		y=y/10;
		counter++;
	}
	int arr[counter];
	//printf("%d \n",counter);
	for(i=0;i<counter;i++){
		arr[i]=*ptr%(10);
		*ptr=*ptr/10;
	}
	*ptr=0;
	for(i=0;i<(counter-1);i++){
		*ptr=*ptr|arr[i];
		*ptr=*ptr*10;
	}
	*ptr=*ptr|arr[counter-1];
}