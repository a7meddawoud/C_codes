#include <stdio.h>

void even(int x);
void odd(int x);
int main(){
	odd(1);
}
void even(int x){
	if(x<=10 && x%2==0){
		printf("%d ",x-1);
		odd(x+1);
	}
}
void odd(int x){
	if(x<=10){
		printf("%d ",x+1);
		even(x+1);
	}
	
}