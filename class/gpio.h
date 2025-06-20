#ifndef GPIO_H
#define GPIO_H

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

#endif