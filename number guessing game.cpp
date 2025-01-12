#include<iostream>
#include<ctime>
void conduction(int guess,int answer,int& number_of_guess){
    number_of_guess=0;
    do{
        std::cin>>guess;
        number_of_guess++;
    if(guess>answer){
    std::cout<<"it's to high"<<std::endl;
    }
    else if(guess<answer){
    std::cout<<"it's to low"<<std::endl;
    }
    else if(guess==answer){
    std::cout<<"correct"<<std::endl;
    }
    }while(guess!=answer);
}
int main(){
    int guess=0;
    int number_of_guess=0;
    std::cout<<"|| NUMBER GUESSING GAME ||"<<std::endl;
    std::cout<<"|| ENTER NUMBER B/W (1 TO 100) ||"<<std::endl;
    srand(time(0));
    int answer=(rand()%100)+1;
    conduction(guess,answer,number_of_guess);
    std::cout<<"*********************"<<std::endl;
    std::cout<<"answer: "<<answer<<std::endl;
    std::cout<<"number of guess: "<<number_of_guess<<std::endl;
    std::cout<<"*********************"<<std::endl;
    return 0;
}