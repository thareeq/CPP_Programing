#include <iostream>

class GPIO{
    private:
        bool current_status;
        int pin_number;
    public:
        GPIO(int pin, bool status);
        ~GPIO();
        void set_status(bool status);
        bool get_status() const;
        int get_pin_number() const;
};


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