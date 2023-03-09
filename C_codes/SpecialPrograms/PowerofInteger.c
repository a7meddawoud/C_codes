#include <stdio.h>
void powercal(float num,int power,float *result);
int main(){
	float result,num;
	int power;
	printf("enter number:");
	scanf("%f",&num);		//******* %f *******************
	printf("enter power:");
	scanf("%d",&power);
	powercal(num,power,&result);
	printf("%0.2f",result);
	
}
void powercal(float num,int power,float *result){
	int i;
	*result=1;
	if(power>0){
		for(i=0;i<power;i++){
			(*result)=(*result)*num;
		}
	}
	else if(power<0){
		num=(1/num);
		for(i=0;i>power;i--){		//****** i>power;i-- *********
			(*result)*=num;
		}
	}
}