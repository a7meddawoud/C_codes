#include <stdio.h>
void tte();
static int i;
static int i=5;
static int i;
static int i;
//static int i=5;
int main(){
	printf("%d \n",i);
	static int i;
	printf("%d \n",i);
	tte();
	printf("%d",i);
	return 0;
}
void tte(){
	static int i=10;
	printf("%d \n",i);
}
