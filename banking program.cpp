#include<iostream>
#include<iomanip>
void show(double balance);
double givemoney();
double takemoney(double balance);
int main(){
    double balance=0;
    int choose=0;
    do{
    std::cout<<"************************"<<std::endl;
    std::cout<<"        S.A BANK "<<std::endl;
    std::cout<<"************************"<<std::endl;
    std::cout<<"enter 1 for cheack balance."<<std::endl;
    std::cout<<"enter 2 for deposit balance."<<std::endl;
    std::cout<<"enter 3 for withdrol money."<<std::endl;
    std::cout<<"enter 4 for exit."<<std::endl;
    std::cout<<"************************"<<std::endl;
    std::cout<<"enter value: ";
    std::cin>>choose;
    std::cin.clear();// 
    fflush(stdin);//
    switch(choose){
        case 1:show(balance);
        break;
        case 2:
        balance=balance+givemoney();
        show(balance);
        break;
        case 3:
        balance=balance-takemoney(balance);
        show(balance);
        break;
        case 4:
        std::cout<<"thank you "<<std::endl;
        break;
        default:
        std::cout<<"plz enter valid number"<<std::endl;
        break;
    }
    }while(4!=choose);
    return 0;
}
void show(double balance){
std::cout<<"your balance is: "<<"$"<<std::setprecision(2)<<std::fixed<<balance<<std::endl;
}
double givemoney(){
    double amount=0;
    std::cout<<"enter amount: ";
    std::cin>>amount;
    if(amount>0){
        return amount;
    }
    else{
        std::cout<<"enter valid amount "<<std::endl;
        return 0;
    }
}
double takemoney(double balance){
    double amount=0;
    std::cout<<"enter amount: ";
    std::cin>>amount;
    if(amount>balance){
        std::cout<<"enter valid amount"<<std::endl;
    return 0;
    }
    else if(amount<0){
        std::cout<<"enter valid value"<<std::endl;
    return 0;
    }
    else{
    return amount;
    }
}