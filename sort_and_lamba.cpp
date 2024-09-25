#include <iostream>
#include <vector>
#include <algorithm>

int funs(int a, int b){
    return a>b;
}
int main(){
    //std::vector<int> vec{2,3,1,65,34,67,33,99,7};
    std::vector<int> vec = {2,3,1,65,34,67,33,99,7};
    
    auto start = vec.begin();
    auto end = vec.end();
    
    //auto funs = [](int a, int b){return a>b;};
    
    //std::sort(start,end,funs);
    
    std::sort(start, end, [](int a, int b){return a>b;});
    
    for(auto i : vec)
    std::cout << i << std::endl;
    
}
