#include<iostream>
int main(){
    int x;
    std::cout<<"what is your age ? "<<std::endl;
    std::cin>>x;
    if(x>=18){
        std::cout<<"you may enter in this web site...."<<std::endl;
    }
    else if (x==17)
    {
        std::cout<<"wait for one year...."<<std::endl;
    }
    else{
        std::cout<<"you are to young to excess our web site..."<<std::endl;
    }
    std::cout<<"your age: "<<x;
    return 0;
}