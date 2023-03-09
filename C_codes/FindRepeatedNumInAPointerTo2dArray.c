#include <stdio.h>



int main(){
	int main(void) {// keep this function call here
	char * A[] = {"1, 3, 4, 7, 13", "1, 2, 4, 13, 15"};
	int arrLength = sizeof(A) / sizeof(*A);
	FindIntersection(A, arrLength);
	
	
	return 0;
	
}
	

int charToInt(char c);
void FindIntersection(char * strArr[], int arrLength) {
	int i, j, c=0, len1, len2;
	int A[100], B[100];
	len1 = strlen(strArr[0]);
	len2 = strlen(strArr[1]);
	//An Integer Array for the first list
	for(i=0, j=0; i < len1;i++){
		if(strArr[0][i] == ','){
			i+=2;j++;c=j;}
			if(j != c)A[j] = A[j] * 10 + charToInt(strArr[0][i]);
			elseA[j] = charToInt(strArr[0][i]);
			c++;
			}
			//Set len for the new array 
			Alen1 = j+1;
			//An Integer Array for the second list
			c = 0;
			for(i=0, j=0; i < len2;i++){
				if(strArr[1][i] == ','){
					i+=2;j++;c=j;}
					if(j != c)B[j] = B[j] * 10 + charToInt(strArr[1][i]);
					elseB[j] = charToInt(strArr[1][i]);
					c++;
					}
					//Set len for the new array 
					Blen2 = j+1;
					//Check Intersection of these two integer arrays A end B
					for(i = 0; i<len1; i++){
						for(j = 0; j<len2; j++){
							
}}}
int charToInt(char c){switch(c){
	case '0':
	return 0;
	case '1':
	return 1;
	case '2':
	return 2;
	case '3':
	return 3;
	case '4':
	return 4;
	case '5':
	return 5;
	case '6':
	return 6;
	case '7':
	return 7;
	case '8':
	return 8;
	case '9':
	return 9;
	default :printf("Error : Cannot convert to INT");return -1;}
	
	}