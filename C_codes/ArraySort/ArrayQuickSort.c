#include <stdio.h>

void quicksort_method(char element_list[], int low, int high);

int main(){
	char ar[]={11,9,15,6,2,4,8,1,2};
	quicksort_method(ar,0,(sizeof(ar)-1));
	char i;
	for(i=0;i<sizeof(ar);i++){
		printf("%d ,",ar[i]);
	}
}

void quicksort_method(char element_list[], int low, int high){
	int pivot, value1, value2, temp;
	if (low < high){
		pivot = low;
		value1 = low;
		value2 = high;
		while (value1 < value2){
			while (element_list[value1] <= element_list[pivot] && value1 <= high){
				value1++;
			}
			while (element_list[value2] > element_list[pivot] && value2 >= low){
				value2--;
			}
			if (value1 < value2){
				temp = element_list[value1];
				element_list[value1] = element_list[value2];
				element_list[value2] = temp;
			}
		}
		temp = element_list[value2];
		element_list[value2] = element_list[pivot];
		element_list[pivot] = temp;
		quicksort_method(element_list, low, value2 - 1);
		quicksort_method(element_list, value2 + 1, high);
	}
}