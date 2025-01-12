#include<iostream>
struct car{
std::string model;
int year;
std::string color;
};
void print(car &car);
void paint(car &car,std::string paint);
int main(){
car car1;
car car2;
car1.model="mustang";
car1.year=2024;
car1.color="green";
paint(car1,"gold");
car2.model="bugatti";
car2.year=2023;
car2.color="black";
paint(car2,"silver");

std::cout<<&car1.model<<std::endl;
print(car1);
std::cout<<&car2.model<<std::endl;
print(car2);
    return 0;
}
void print(car &car){
std::cout<<&car.model<<std::endl;
std::cout<<car.year<<std::endl;
std::cout<<car.color<<std::endl;
std::cout<<std::endl;
}
void paint(car &car,std::string paint){
car.color=paint;
}