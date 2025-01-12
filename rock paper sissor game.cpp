#include<iostream>
#include<ctime>
int getusserchoose();
int getcomputerchoose();
void showchoose(int choose);
void winner(int player,int computer);
int main(){
int player;
int computer;

 player=getusserchoose();
 std::cout<<"your choose: ";
 showchoose(player);

 computer=getcomputerchoose();
 std::cout<<"computer choose: ";
 showchoose(computer);

 winner(player,computer);

    return 0;
}
int getusserchoose(){
    int player;
    do{
    std::cout<<"***********************"<<std::endl;
    std::cout<<"rock paper sissor game"<<std::endl;
    std::cout<<"***********************"<<std::endl;
    std::cout<<"1 for rock "<<std::endl;
    std::cout<<"2 for paper "<<std::endl;
    std::cout<<"3 for sissor "<<std::endl;
    std::cout<<"***********************"<<std::endl;
    std::cout<<"enter your choose: ";
    std::cin>>player;
    }while(player!=1 && player!=2 && player!=3);
    return player;
}
int getcomputerchoose(){
    srand(time(0));
    int num=(rand()%3)+1;
    switch(num){
        case 1:return 1;
        case 2:return 2;
        case 3:return 3;
    }
    return 0;
}
void showchoose(int choose){
    switch (choose)
    {
    case 1: std::cout<<"rock "<<std::endl;
        break;
    case 2: std::cout<<"paper "<<std::endl;
        break;
    case 3: std::cout<<"sissor "<<std::endl;
        break;
    }
}
void winner(int player,int computer){
if(player==computer){
std::cout<<"tie"<<std::endl;
}
else if(player==1 && computer==3||
        player==2 && computer==1||
        player==3 && computer==2){
            std::cout<<"player win"<<std::endl;
        }
else{
    std::cout<<"computer win"<<std::endl;
}        
}
