#include <stdio.h>

char searchString(char *string,char *data,char size1,char size2);

int main(){
	char data[]="jdjndorAhmedoif";
	char string[]="Ahmed";
	printf("%d",searchString(string,data,(sizeof(string)-1),(sizeof(data)-1)));
	
}

char searchString(char *string,char *data,char size1,char size2){
	char i,j,k;
	for(i=0;i<(size2-1);i++){
		if(data[i]==string[0]){
			for(j=(i+1),k=1;k<(size1-1);j++,k++){
				if(string[k]!=data[j]){
					break;
				}
			}
			if(k==(size1-1)){
				return i;
			}
		}	
	}
	return 0xff;
}