#include <xc.h>
#include <sys/attribs.h>

#define ISR(VECTOR, PRIORITY)                         \
    void __ISR(VECTOR, PRIORITY) VECTOR##_ISR(void);  \
    void VECTOR##_ISR(void)


#define ENABLE_INTERRUPTS_GLOBAL do{ __asm__("EI");}while(0)

#define DISABLE_INTERRUPTS_GLOBAL do{ __asm__("DI");}while(0)



