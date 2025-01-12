#include<iostream>
int main(){
    std::cout<<"this is for incressing pattern"<<std::endl;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
         std::cout<<"*";  
        }
    std::cout<<" "<<std::endl;
    }

/****************************************************************************/
   
   std::cout<<"this is for decressing pattern"<<std::endl;
    for(int i=1;i<=5;i++){
        for(int j=i;j<=5;j++){
         std::cout<<"*";  
        }
    std::cout<<" "<<std::endl;
    }
    return 0;
}