#include <iostream>
#include <vector>
#include <array>
#include <map>

int main(){
    std::vector<int> vec = {23,1,22,45,2,4,5,89,67,49};
    
    for(auto i: vec)
        std::cout<<i<<" ";
    std::cout<<"\n";
    
    for(auto i: {23,12,4,56,78})
        std::cout<<i<<" ";
        
    std::cout<<"\n";
    
    std::array<int, 5> newarr{1,2,3,4,5};
    for(auto i: newarr)
        std::cout<<i<<" "; 
    std::cout<<"\n";
        
    std::map<int, int> MAP({{1,4},{3,5},{6,9}});
    for(auto i:MAP)
        std::cout<<i.first<<" "<<i.second << " || ";
}
