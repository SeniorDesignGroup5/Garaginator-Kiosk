
#include <stdint.h>

#include <xc.h>
#include <sys/attribs.h>

/*
#include "system.h"
#include "user.h"
*/
#include "interrupt.h"
int32_t main(){

    
    ANSELA = 0;          // port a as all digital outputs
    T1CON |= 0x8000;     // enable Timer1
    PR1    = 0x4FFF;     //set clock divider to 2^14
    TRISA  = 0;          // set port a as all output
    INTCONbits.MVEC = 1; // enable multi-vectored interrupts
    IEC0bits.T1IE = 1;   // enable timer_1_interrupts
    IPC1bits.T1IP = 7;   // set Timer1 interrupt priority bits
    IPC1bits.T1IS = 0;   // Timer1 interrupt sub-priority

    ENABLE_INTERRUPTS_GLOBAL;
      
    
    while(1){
        int i=0;
        for(i=0;i < 100000; i++){
        }
        
        LATAINV = 2;
    }

}

ISR(_TIMER_1_VECTOR, IPL7AUTO) {
    LATAINV = 1;
    IFS0bits.T1IF = 0;
}