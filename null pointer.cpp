#include<iostream>
int main(){
    int *pointer=nullptr;

    int x=123;

    pointer = &x;

    if(pointer==nullptr){
        std::cout<<"yes";
    }
    else{
        std::cout<<"no\n";
        std::cout<<pointer;

    }
    
    return 0;
}