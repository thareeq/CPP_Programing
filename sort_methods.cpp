#include <iostream>
#include <algorithm>
#include <array>
#include <functional>
#include <string_view>


int main(){
    std::array<int, 10> s{4,56,7,3,23,1,56,78,8,5};
    auto print = [&s](std::string_view const rem){
        for(auto i:s)
            std::cout << i << " ";
        //std::cout<<"\n";
        std::cout<<" : "<<rem<<std::endl;
    };
    
    std::sort(s.begin(), s.end());
    print("Sorted with default operator");
    
    std::sort(s.begin(), s.end(), std::greater<int>());
    print("Sorted with greater function");
    
    struct{
        bool operator()(int a, int b){return a>b;};
    }customless;
    
    std::sort(s.begin(), s.end(), customless);
    print("Sorted with custom function");
    
    std::sort(s.begin(), s.end(), [](int a , int b){return a<b;});
    print("Sorted with lambda expression");
    
}
