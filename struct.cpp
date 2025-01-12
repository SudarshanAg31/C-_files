#include<iostream>
struct student{
std::string name;
int age=18;
double percantage;
};
int main(){
    student student1;
    student1.name="sudarshan agrawal";
    student1.percantage=81.76;
    std::cout<<student1.name<<std::endl;
    std::cout<<student1.age<<std::endl;
    std::cout<<student1.percantage<<std::endl;
    std::cout<<std::endl;

    student student2;
    student2.name="shriyansh sharma";
    student2.percantage=92.4;
    std::cout<<student2.name<<std::endl;
    std::cout<<student2.age<<std::endl;
    std::cout<<student2.percantage<<std::endl;
    std::cout<<std::endl;

    student student3;
    student3.name="shivam rana";
    student3.percantage=55.6;
    std::cout<<student3.name<<std::endl;
    std::cout<<student3.age<<std::endl;
    std::cout<<student3.percantage<<std::endl;
    std::cout<<std::endl;

    return 0;
}