#include <iostream>

//template <class T> T myMax(T x,T y){
template <typename T> T myMax(T x,T y){
    return x>y?x:y;
}

int main(){
   
    std::cout<<"Output "<<myMax<int>(5,6)<<std::endl;
    std::cout<<"Output "<<myMax<float>(5.6,4.2)<<std::endl;
    std::cout<<"Output "<<myMax<char>('q','r')<<std::endl;
    return 0;
}
