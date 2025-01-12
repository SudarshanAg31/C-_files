#include<iostream>
int main(){
    char a;
    double b;
    double z;
    double d;
    std::cout<< " enter first value "<<std::endl;
    std::cin>>b;
    std::cout<< " enter second value "<<std::endl;
    std::cin>>z;
    std::cout<< " enter +-*/ "<<std::endl;
    std::cin>>a;
    if('+' == a){
    std::cout<< " sum: ";
        d=b+z;
    std::cout<<d;
    }
    else if(a == '-'){
     std::cout<< " minus: ";
     d=b-z;
    std::cout<<d;
    }
    else if(a == '*'){
     std::cout<< " multiply: ";
     d=b*z;
    std::cout<<d;
    }
    else if(a == '/'){
     std::cout<< " divide: ";
     d=b/z;
    std::cout<<d;
    }
    else{
        std::cout<<"plz enter valid symbol (+-*/) "<<std::endl;
    }
    return 0;
}