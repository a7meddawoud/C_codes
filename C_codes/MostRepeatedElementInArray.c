#include <stdio.h>
char Mostrepeated(char *ptr, char size);
int main(){
	char arr[]="ADEEFSEA";
	char x;
	x=Mostrepeated(arr,sizeof(arr));
	printf("%c",x);
}
char Mostrepeated(char *ptr, char size){
	int i,j,counter=0,maxcount=0,num;
	for(i=0;i<size;i++){
		for(j=i;j<size;j++){
			if(ptr[i]==ptr[j]){
				counter++;
			}
			if(counter>maxcount){
				maxcount=counter;
				num=i;
			}
		}
		counter=0;  //counter after frist for loop
	}
	printf("%d , %d \n",num,maxcount);
	return ptr[num];
}