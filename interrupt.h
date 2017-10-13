#include <xc.h>
#include <sys/attribs.h>

#define ISR(VECTOR, PRIORITY)                         \
    void __ISR(VECTOR, PRIORITY) VECTOR##_ISR(void);  \
    void VECTOR##_ISR(void)




