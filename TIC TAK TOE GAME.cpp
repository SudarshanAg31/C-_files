#include<iostream>
#include<ctime>
void drawboard(char *spaces);
void playermove(char *spaces,char player);
void computermove(char *spaces,char computer);
bool rule(char *spaces,char player);
bool tie(char *spaces);
int main(){
    char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player='X';
    char computer='O';
    bool running=true;
    std::cout<<"TIC TAC TOE GAME"<<std::endl;
    drawboard(spaces);
    while(running){
    playermove(spaces,player);
    drawboard(spaces);
    if(rule(spaces,player)){
        running=false;
        break;
    }
    else if(tie(spaces)){
        running=false;
        break;
    }
    computermove(spaces,computer);
    drawboard(spaces);
    if(rule(spaces,player)){
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
void playermove(char *spaces,char player){
    int number;
    do{
    std::cout<<"enter number b/w (1-9): ";
    std::cin>>number;
    number--;
    if(spaces[number]==' '){
        spaces[number]=player;
        break;
    }
    }while(number>0 && number<9);
}
void computermove(char *spaces,char computer){
srand(time(0));
while(true){
int number=rand()%9;

    if(spaces[number]==' '){
        spaces[number]=computer;
        break;
    }
}
}
bool rule(char *spaces,char player){
if(spaces[0]!=' '&& spaces[0]==spaces[1]&&spaces[1]==spaces[2]){
    spaces[0]==player?std::cout<<"you win"<<std::endl:std::cout<<"you loose"<<std::endl;
}
else if(spaces[3]!=' '&& spaces[3]==spaces[4]&&spaces[4]==spaces[5]){
    spaces[3]==player?std::cout<<"you win"<<std::endl:std::cout<<"you loose"<<std::endl;
}
else if(spaces[6]!=' '&& spaces[6]==spaces[7]&&spaces[7]==spaces[8]){
    spaces[8]==player?std::cout<<"you win"<<std::endl:std::cout<<"you loose"<<std::endl;
}
else if(spaces[0]!=' '&& spaces[0]==spaces[3]&&spaces[3]==spaces[6]){
    spaces[0]==player?std::cout<<"you win"<<std::endl:std::cout<<"you loose"<<std::endl;
}   
else if(spaces[1]!=' '&& spaces[1]==spaces[4]&&spaces[4]==spaces[7]){
    spaces[1]==player?std::cout<<"you win"<<std::endl:std::cout<<"you loose"<<std::endl;
} 
else if(spaces[2]!=' '&& spaces[2]==spaces[5]&&spaces[5]==spaces[8]){
    spaces[2]==player?std::cout<<"you win"<<std::endl:std::cout<<"you loose"<<std::endl;
} 
else if(spaces[0]!=' '&& spaces[0]==spaces[4]&&spaces[4]==spaces[8]){
    spaces[0]==player?std::cout<<"you win"<<std::endl:std::cout<<"you loose"<<std::endl;
} 
else if(spaces[2]!=' '&& spaces[2]==spaces[4]&&spaces[4]==spaces[6]){
    spaces[2]==player?std::cout<<"you win"<<std::endl:std::cout<<"you loose"<<std::endl;
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
