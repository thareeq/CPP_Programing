#include <iostream>

class PI{
    public:
    PI(){
        std::cout << "HELLO" << std::endl;
    }
    
    int operator()(){
        std::cout<<"TESTING OPERATOR" << std::endl;
        return 5;
    }
    
};


int main(){
    PI p;
    p();
    std::cout<<p();
}
