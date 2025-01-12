#include<iostream>
int main(){
    int age;
    std::string name;
    std::cout<<"what's your age: ";
    std::cin>>age;
    std::cout<<"what is your fullname: ";
    std::getline(std::cin>>std::ws,name);
    std::cout<<"you are "<<age<<" years old"<<std::endl;
    std::cout<<"your name is "<<name;
    return 0;
}