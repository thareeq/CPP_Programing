#include <iostream>
#include "gpio.h"

void print_pin_number(const GPIO &gpio){
    std::cout<<"PIN NUMBER FUN "<<gpio.get_pin_number()<<std::endl;
}


int main(){
    GPIO red_led(25,true);
    red_led.set_status(true);
    std::cout<<red_led.get_status()<<std::endl;
    red_led.set_status(false);
    std::cout<<red_led.get_status()<<std::endl;
    print_pin_number(red_led);
}