#include <stdio.h>
char SearchIterative(char *ptr,char x,char size);
char SearchRecursive(char *ptr,char x,char size);
int main(){
	char xx[]="AHBTYOV";
	printf("%d",SearchRecursive(xx,'B',sizeof(xx)));
}
/*
time complexity = O(N)
*/
char SearchIterative(char *ptr,char x,char size){		
	int i;
	for(i=0;i<size;i++){
		if(ptr[i]==x){
			return i;
		}
	}
	return 0xff;
}
/*
time complexity = 
*/
char SearchRecursive(char *ptr,char x,char size){
	static int i =0;
	if(ptr[i]==x){
		return i;
	}
	else if(i>=size){
		return 0xff;
	}
	else{
		i++;
		SearchRecursive(ptr,x,size);
	}
	
}