#include <stdio.h>

void  ReverseStringIteration(char xx[],char size);
void  ReverseStringRecursion(char xx[],char lastCharIndex);
int main(){
	char srt[]="AHMEDDawoud";
	printf("%s \n",srt);
	ReverseStringIteration(srt,(sizeof(srt)-2));	 
	printf("%s \n",srt);
	ReverseStringRecursion(srt,(sizeof(srt)-2));	//*********(size-2)*********  ممكن تعمل فنكشن بتطرح هي اتنين وبعد كدا تنادي الفنكشن بتاعت الريفرس
	printf("%s",srt);
}
void  ReverseStringIteration(char xx[],char lastCharIndex){
	char i=0,copy ,j=lastCharIndex; 		
	while(i<j){
		copy=xx[i];
		xx[i]=xx[j];
		xx[j]=copy;
		j--;
		i++;
	}
}
void  ReverseStringRecursion(char xx[],char lastCharIndex){
	static char counter;
	char temp;
	if(counter<lastCharIndex){
		temp=xx[counter];
		xx[counter]=xx[lastCharIndex];
		xx[lastCharIndex]=temp;
		counter++;
		lastCharIndex--;
		ReverseStringRecursion(xx,lastCharIndex);
	}
}