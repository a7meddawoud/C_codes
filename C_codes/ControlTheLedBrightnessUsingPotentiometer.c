#include <stdio.h>

/* 
*/
int main(){
	ADC_vInit(); 
	Timer1_vInit(); // initialize as fast PWM 
	u16 x;
	while(1){
	x=ADC_vGetVal;  // get value in mv (from 0 to 5000);
	Timer1_vWriteICR1(50000);
	imer1_vChannelACopmareRegister(x);
	}
	
}