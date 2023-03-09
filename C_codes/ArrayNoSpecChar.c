#include <stdio.h>
void NoSpecChar(char *ss,char size);
void sortarr(char *ar);
void NODub(char *ar,int size);
int main(){
	char arr[]="E$D@B^C!A&F*B";
	NoSpecChar(arr,sizeof(arr));
	
	
	return 0;
}
void NoSpecChar(char *ss,char size){
	char i=0,j=0,k,temp;
	char bb[size];
	for(i=0;i<size;i++){
		if(ss[i]<91 && ss[i]>64){
			bb[j]=ss[i];
			j++;
		}
		bb[j]='\0';
	}
	printf("%s \n",bb);
	sortarr(bb);
	printf("%s \n",bb);
	NODub(bb,sizeof(bb));
	printf("%s",bb);
}
void sortarr(char *ar){
	char i,j,k,temp;
	for(i=0;ar[i]!='\0';i++){
		for(j=0;ar[j]!='\0';j++){
			if(ar[i]<ar[j]){
				temp=ar[j];
				ar[j]=ar[i];
				ar[i]=temp;
			}
		}
	}
	
}

void NODub(char *ar,int size){
	char i,j,k,temp;
	for(i=0;i<size;i++){
		for(j=(i+1);j<size;j++){
			if(ar[i]==ar[j]){
				for(k=i;k<size;k++){
					ar[j]=ar[j+1];
				}
				//ar[j+1]='\0';
			}
		}
	}
	
	
}