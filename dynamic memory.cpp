#include<iostream>
int main(){
    char *pointer=NULL;
    int size;
    std::cout<<"enter number of grade that you want to enter: ";
    std::cin>>size;
    pointer=new char[size];

    for(int i=0;i<size;i++){
        std::cout<<"enter grade "<<i+1<<": ";
        std::cin>>pointer[i];
    }
    for(int i=0;i<size;i++){
        std::cout<<pointer[i]<<" ";
    }
    delete[] pointer;
    return 0;
}