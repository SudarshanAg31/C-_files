#include<iostream>
int main(){
    int temprature;
    bool sudarshan =true;
    std::cout<<"what's the temprature..??"<<std::endl;
    std::cin>>temprature;
    if(temprature<=15 || temprature>=25){
        std::cout<<"not good";
    }
    else{
        std::cout<<"good";
    }
    if(!sudarshan){
        std::cout<<"hyy";
    }
    else{
        std::cout<<"wyy";
    }
    return 0;
}