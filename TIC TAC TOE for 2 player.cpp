#include<iostream>
void drawboard(char *spaces);
void playermove(char *spaces,char player,std::string player1);
void player_2move(char *spaces,char player2,std::string player3);
bool rule(char *spaces,char player,std::string player1,std::string player3);
bool tie(char *spaces);
int main(){
    char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    std::string player1;
    std::string player3;
    std::cout<<"player 1: enter your name: ";
    std::cin>>player1;
    std::cout<<"player 2: enter your name: ";
    std::cin>>player3;
    char player='X';
    char player2='O';
    bool running=true;
    std::cout<<"TIC TAC TOE GAME"<<std::endl;
    drawboard(spaces);
    while(running){
    playermove(spaces,player,player1);
    drawboard(spaces);
    if(rule(spaces,player,player1,player3)){
        running=false;
        break;
    }
    else if(tie(spaces)){
        running=false;
        break;
    }
    player_2move(spaces,player2,player3);
    drawboard(spaces);
    if(rule(spaces,player,player1,player3)){
        running=false;
        break;
    }
    else if(tie(spaces)){
        running=false;
        break;
    }
    }
    std::cout<<"thank you :)"<<std::endl;
    return 0;
}
void drawboard(char *spaces){
    std::cout<<std::endl;

    std::cout<<"     |     |     "<<std::endl;
    std::cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<"  "<<std::endl;
    std::cout<<"_____|_____|_____"<<std::endl;
    std::cout<<"     |     |     "<<std::endl;
    std::cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<"  "<<std::endl;
    std::cout<<"_____|_____|_____"<<std::endl;
    std::cout<<"     |     |     "<<std::endl;
    std::cout<<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<"  "<<std::endl;
    std::cout<<"     |     |     "<<std::endl;

    std::cout<<std::endl;

}
void playermove(char *spaces,char player,std::string player1){
    int number;
    do{
    std::cout<<player1<<" enter number b/w (1-9): ";
    std::cin>>number;
    number--;
    if(spaces[number]==' '){
        spaces[number]=player;
        break;
    }
    }while(number>0 && number<9);
}
void player_2move(char *spaces,char player2,std::string player3){
int number;
    do{
    std::cout<<player3<<" enter number b/w (1-9): ";
    std::cin>>number;
    number--;
    if(spaces[number]==' '){
        spaces[number]=player2;
        break;
    }
    }while(number>0 && number<9);
}
bool rule(char *spaces,char player,std::string player1,std::string player3){
if(spaces[0]!=' '&& spaces[0]==spaces[1]&&spaces[1]==spaces[2]){
    spaces[0]==player?std::cout<<player1<<" win"<<std::endl:std::cout<<player3<<" win"<<std::endl;
}
else if(spaces[3]!=' '&& spaces[3]==spaces[4]&&spaces[4]==spaces[5]){
    spaces[3]==player?std::cout<<player1<<" win"<<std::endl:std::cout<<player3<<" win"<<std::endl;
}
else if(spaces[6]!=' '&& spaces[6]==spaces[7]&&spaces[7]==spaces[8]){
    spaces[8]==player?std::cout<<player1<<" win"<<std::endl:std::cout<<player3<<" win"<<std::endl;
}
else if(spaces[0]!=' '&& spaces[0]==spaces[3]&&spaces[3]==spaces[6]){
    spaces[0]==player?std::cout<<player1<<" win"<<std::endl:std::cout<<player3<<" win"<<std::endl;
}   
else if(spaces[1]!=' '&& spaces[1]==spaces[4]&&spaces[4]==spaces[7]){
    spaces[1]==player?std::cout<<player1<<" win"<<std::endl:std::cout<<player3<<" win"<<std::endl;
} 
else if(spaces[2]!=' '&& spaces[2]==spaces[5]&&spaces[5]==spaces[8]){
    spaces[2]==player?std::cout<<player1<<" win"<<std::endl:std::cout<<player3<<" win"<<std::endl;
} 
else if(spaces[0]!=' '&& spaces[0]==spaces[4]&&spaces[4]==spaces[8]){
    spaces[0]==player?std::cout<<player1<<" win"<<std::endl:std::cout<<player3<<" win"<<std::endl;
} 
else if(spaces[2]!=' '&& spaces[2]==spaces[4]&&spaces[4]==spaces[6]){
    spaces[2]==player?std::cout<<player1<<" win"<<std::endl:std::cout<<player3<<" win"<<std::endl;
} 
return false;
}
bool tie(char *spaces){
for(int i=0;i<9;i++){
    if(spaces[i]==' '){
        return false;
        break;
    }
}
std::cout<<"tie"<<std::endl;
return true;
}
