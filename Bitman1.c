//Bitman1
//Wechselblinker high low nibble
//

#include <stm32f10x.h>
#include "TouchP0P1.h"



	
void delay (void);

int main(void){
	InitTouchP0P1("1");
	
	/*while(1){				//wechselblinker Nibble #1
		P1 = 0x0f;
		delay();
		P1 = 0xf0;
		delay();
	}
}*/
	
	/*while(1){					// wechselblinker Nibble #2
		delay();
		if((P1 == 0x0f) | (P1 == 0)){
			P1 = 0xf0;
		}
		else{
			delay();
			P1 = 0x0f;
		}
	}*/
	
	/*while(1){					// wechselblinker Nibble #3
		switch(P1){
			case 0x0f: P1 = 0xf0; delay(); break;
			case 0xf0: P1 = 0x0f; delay(); break;
			default:	 P1 = 0x0f; delay();
		}
	}*/
	
	/*while(1){					// wechselblinker Nibble #4
		while((P1 == 0x0f) | (P1 == 0)){
			delay();
			P1 = 0xf0;
		}
		
		while(P1 == 0xf0){
			delay();
			P1 = 0x0f;
		}
	}*/
	
	/*P1 = 0x0f;				// wechselblinker Nibble #5
	while(1){
		P1 = ~P1;
		delay();
	}*/
	
}


void delay (void){
	short td1 = 0;
	while(td1 != 30){
		long td = 0;
		for (td =65000; td > 0; td--);
		td1++;
	}
}
