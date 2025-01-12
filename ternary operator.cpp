#include<iostream>
int main(){
   // example:1
      //int number=300;
    /*if(number>=33){
        std::cout<<"you pass"<<std::endl;
    }
    else{
        std::cout<<"you fail"<<std::endl;
    }*/
   
   //example:2
   /*std::cout<<"*******************"<<std::endl;
   number>=33 ? std::cout<<"you pass"<<std::endl:std::cout<<"you fail"<<std::endl;
   std::cout<<"*******************"<<std::endl;*/
    
    //example:3
    //number%2==1?std::cout<<"even":std::cout<<"odd";
    
    //example:4
    bool math=true;
    //math?std::cout<<"1+1=2":std::cout<<"1+1=3";
    std::cout<<(math?"1+1=2":"1+1=3");
    return 0;
}