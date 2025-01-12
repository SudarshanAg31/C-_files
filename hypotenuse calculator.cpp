#include<iostream>
#include<cmath>
int main(){
    double h;
    double b;
    double z;
    std::cout<<"base of tringle ?"<<std::endl;
    std::cin>>b;
    std::cout<<"hight of tringle ?"<<std::endl;
    std::cin>>h; 
    std::cout<<"hypotenuse of tringle: ";
    z=sqrt(b*b+h*h);
    std::cout<<z;
    return 0;
}