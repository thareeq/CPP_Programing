#include <iostream>
#include <thread>

int task(){
    std::cout<<"Task Done"<<std::endl;
    return 0;
}

int main(){
    std::thread t(task); // Start thread that runs task()
    t.join();           // Wait for thread to finish
    std::cout<<"Main thread done "<<std::endl;
    return 0;
}