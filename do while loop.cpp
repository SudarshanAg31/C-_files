#include<iostream>
int main(){
    int number1;
    int sum=0;
    std::cout<<"add number for obtain answer enter 0.... "<<std::endl;
    do{
        std::cout<<"enter number"<<std::endl;
        std::cin>>number1;
        sum=number1+sum;
    }while(number1!=0);
    std::cout<<sum;
   
    return 0;
}