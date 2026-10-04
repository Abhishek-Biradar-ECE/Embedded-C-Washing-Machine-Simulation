#include <xc.h>


void init_timer2(void)
{
    
    /* loading the pre Load register with 250 */
    PR2 = 250;
    
    /* the timer interrupt is enabled */
    TMR2IE = 1;
    
    /* switching off the timer2 */
    TMR2ON = 0;
    
}
