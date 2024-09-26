#include <iostream>

template <typename T> class Array{
    private:
        T *ptr;
        int size;
    public:
        Array(T arr[], int s);
        void print();
};

template <typename T> Array<T>::Array(T arr[], int s){
    ptr = new T[5];
    size = s;
    for(int i=0;i<size;i++){
        ptr[i]=arr[i];
    }
}

template <typename T> void Array<T>::print(){
    for(int i=0;i<size;i++)
        std::cout<<ptr[i]<<std::endl;
}

int main(){
    int a[5]={1,2,3,4,5};
    Array a_1(a,5);
    a_1.print();
    char b[6]={'a','b','c','d','e','f'};
    Array b_1(b,6);
    b_1.print();
}
