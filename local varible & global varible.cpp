#include<iostream>
int number();
int num=12;//golbal varible
int main(){
    int num=1;//local varible
    std::cout<<::num<<std::endl;//(::)through this we can disply global varible inside the function
    number();
    return 0;
}
int number(){
    int num=2;//local varible
    std::cout<<num;
}