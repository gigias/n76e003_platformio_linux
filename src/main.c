#include "N76E003.h"
#include "SFR_Macro.h"
#include "Function_define.h"
#include "Common.h"
#include "Delay.h"
void sw_delay (int ms);
void main(void){
    P15_Quasi_Mode;
    while(1){
             P15 = 0;
             sw_delay(150);
             P15 = 1;
             sw_delay(100);              
  }
}
// Software based delay. Time is not accurate.
void sw_delay (int ms){
    int a, b;
    for (a=0; a<1296; a++){
             for (b=0; b<ms; b++);
	}
}
