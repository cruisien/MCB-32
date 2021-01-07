//Bitman

#include <stm32f10x.h>
#include "TouchP0P1.h"


	#define E0   P0_0
	#define E1   P0_1
	#define A0   P1_0
	#define A1   P1_1
	#define Alarm  P1_2
char bTemp = 0;
long ltvar = 0;
	
void delay (void);

int main(void){
	InitTouchP0P1("1");
	
	
	while(1){
		/*A0  = 1;
		Alarm = 1;
		A1 = E1;
		A1 = !E1;
		A1 = E0 & E1;
		A1 = E0 | E1;
		A1 = E0 ^ E1;*/
		
		//A0 = (E0 == 0);
		delay();
		while (!E1);
		if((P0 & 8) == 0) A1 = 1;
		
		//P1 = P0 |128;
	//for (ltvar = 65000; ltvar > 0; ltvar--);
	}
}


void delay (void){
	short td1 = 0;
	while(td1 != 30){
		long td = 0;
		for (td =65000; td > 0; td--);
		td1++;
	}
}
