#include<iostream>
int main (){
    char a;
    double b;
    double c;
    double z;
    std::cout<<"enter first vlaue"<<std::endl;
    std::cin>>b;
    std::cout<<"enter second vlaue"<<std::endl;
    std::cin>>c;
    std::cout<<"enter symbol(+-*/)"<<std::endl;
    std::cin>>a;
    switch(a){
        case '+':
        std::cout<<"sum: ";
        z=c+b;
        std::cout<<z;
        break;
        case '-':
        std::cout<<"minus: ";
        z=b-c;
        std::cout<<z;
        break;
        case '*':
        std::cout<<"muliplay: ";
        z=c*b;
        std::cout<<z;
        break;
        case '/':
        std::cout<<"divide: ";
        z=b/c;
        std::cout<<z;
        break;
        default:
        std::cout<<"plz enter (+-*/)";
        break;
    }
    return 0;
}