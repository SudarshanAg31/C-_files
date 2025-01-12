#include<iostream>
int main(){
    std::cout<<"**********************" <<std::endl;  
    std::cout<<"      QUIZ GAME    " <<std::endl;  
    std::cout<<"**********************" <<std::endl;  
    std::string question[]={"1: who discover gravity? "
                            ,"2: what's 2+4? "
                            ,"3: how many letter in apple? "
                            ,"4: which country have largest population? "};
    std::string option[][4]={{"a:sudarshan"," b:tanvi"," c:newton"," d:dhruv"}
                            ,{"a:5"," b:7"," c:6"," d:9"}
                            ,{" a:5"," b:7"," c:6"," d:9"}
                            ,{" a:china"," b:india"," c:napil"," d:pakistan"}}; 
    char answer[]={'c','c','a','b'};
    int size=sizeof(question)/sizeof(question[0]);
    char guess;
    int score=0;
    for(int i=0;i<size;i++){
     std::cout<<question[i]<<std::endl;
        for(int j=0;j< sizeof(option[i])/sizeof(option[i][0]);j++){
            std::cout<<option[i][j]<<std::endl;
        }
    std::cout<<std::endl;
    std::cout<<"answer: ";
    std::cin>>guess;
    if(guess==answer[i]){
    std::cout<<"correct"<<std::endl;
    score++;
    }
    else{
    std::cout<<"incorrect"<<std::endl;
    }
    }
    std::cout<<"*********************"<<std::endl;
    std::cout<<"       RESULT     "<<std::endl;
    std::cout<<"*********************"<<std::endl;
    std::cout<<(score/(double)size)*100<<"%"<<std::endl;
    return 0;
}