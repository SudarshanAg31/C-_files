#include<iostream>
int main(){
    double temp;
    double math;
    char unit;
    std::cout<<std::endl<<"convert 'C' to 'F' "<<std::endl;
    std::cout<<"        OR "<<std::endl;
    std::cout<<"convert 'F' to 'C' "<<std::endl; 

    std::cout<<std::endl<<"enter unit"<<std::endl;
    std::cin>>unit;
    if(unit=='c'){
     std::cout<<"enter temprature "<<std::endl;
    std::cin>>temp;
    math=temp+273.15;
    std::cout<<math<<" k"<<std::endl;
    }
   else if (unit=='k'){
    std::cout<<"enter temprature "<<std::endl;
    std::cin>>temp;
    math=temp-273.15;
    std::cout<<math<<"'c"<<std::endl;
   }
   else{
    std::cout<<"plz enter 'c' or 'k'"<<std::endl;
   }
    return 0;
}