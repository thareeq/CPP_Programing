class GPIO{
    private:
        bool current_status;
    public:
        void set_gpio(bool status){
            current_status = status;
        }
        bool get_gpio(){
            return current_status;
        }
};

int main(){
    GPIO red_led;
    red_led.set_gpio(true);
    std::cout<<red_led.get_gpio()<<std::endl;
    red_led.set_gpio(false);
    std::cout<<red_led.get_gpio()<<std::endl;
}