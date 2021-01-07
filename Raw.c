#include <stm32f10x.h>
#include "TouchP0P1.h"



	
void delay (void);

int main(void){
	InitTouchP0P1("1");
}


void delay (void){
	short td1 = 0;
	while(td1 != 30){
		long td = 0;
		for (td =65000; td > 0; td--);
		td1++;
	}
}