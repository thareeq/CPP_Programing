#include <iostream>
#include "gpio.h"

GPIO::GPIO(int pin, bool status):
        pin_number(pin), current_status(status){
        std::cout<<"PIN Number "<<pin_number<<
           " Status "<<current_status<<std::endl;
        }

GPIO::~GPIO(){
            std::cout<<"Cleaning up GPIO pin "<<pin_number<<std::endl;
        }
    
void GPIO::set_status(bool status){
            current_status = status;
        }
bool GPIO::get_status() const{
            return current_status;
        }
int GPIO::get_pin_number() const{
            return pin_number;
        }