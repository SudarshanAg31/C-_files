#include<iostream>
int main(){
    std::string name;
    std::cout<<"enter your full name"<<std::endl;
    std::getline(std::cin,name);
    std::cout<<name.find('a');
    return 0;
}