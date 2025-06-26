#include <iostream>

class Animal {
    public:
        void eat(){
            std::cout<<"This animal eats "<<std::endl;
        }
        void sleep(){
            std::cout<<"This animal sleeps "<<std::endl;
        }
};

class Dog:public Animal{
    public:
        void bark(){
            std::cout<<"This animal Barks"<<std::endl;
        }
};


int main()
{
    Dog d1;
    d1.eat();
    d1.sleep();
    d1.bark();
    return 0;
}