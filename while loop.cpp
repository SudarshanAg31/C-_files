#include<iostream>
int main(){
    std::string name;
    while (name.empty())
    {
        std::cout<<"plz enter your name: ";
        getline(std::cin,name);
    }
    std::cout<<name;
    
    return 0;
}