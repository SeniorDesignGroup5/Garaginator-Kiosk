
#include <stdint.h>

#include <xc.h>
#include <sys/attribs.h>

/*
#include "system.h"
#include "user.h"
*/
#include "interrupt.h"
int32_t main(){

    ANSELA = 0; // port a as all digital outputs
    T1CON |= 0x8000; // enable Timer1
    PR1    = 0x7FFF; //set clock divider to 2^14
    TRISA  = 0; // set port a as all output
    
    IEC0 |= 16; // enable timer_1_interrupts
    
    
    while(1){
        int i=0;
        for(i=0;i < 100000; i++){
        }
        
        LATAINV = 2;
    }

}

ISR(_UART1_RX_VECTOR, IPL5AUTO) 
{
    
}

ISR(_TIMER_1_VECTOR, IPL5AUTO) {
    LATA = LATA ^1;
    IFS0 &= 16;
}