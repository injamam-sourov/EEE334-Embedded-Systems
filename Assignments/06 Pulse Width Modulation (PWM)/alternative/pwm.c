#include <16F877A.h>                                                           
#device  adc=10                                                                
#include <math.h>                                                              
#fuses   XT,NOWDT,NOLVP                                                        
#use     delay(clock=20000000)  


void main()
{
 // p = 20M/(30k*4*2) - 1 = 34 
 setup_timer_2(T2_DIV_BY_1,34,1);    // 20MHz clock, prescaler=1, resolution=4 *256=1024. formula: (71.68*1000)/(4*1*256)=70.4khz pwm frequency
 
 setup_ccp2(CCP_PWM);
  
 set_pwm2_duty(512);
   
}

