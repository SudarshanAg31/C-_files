#include<iostream>
int main(){
    //& is use for menory address... 
    int num=2;
    std::string name= "sudarshan";
    bool student=true;
    std::cout<<&num<<std::endl;
    std::cout<<&name<<std::endl;
    std::cout<<&student;
    return 0;
}