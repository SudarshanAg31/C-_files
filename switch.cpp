#include<iostream>
int main(){
    int z;
    std::cout<<"|... enter number 1 to 5 ...|"<<std::endl;
    std::cin>>z;
    switch (z)
    {
    case 1:
     std::cout<<"today is your day "<<std::endl; 
        break;
    case 2:
    std::cout<<"today is your unlucky day"<<std::endl;
    break;
    case 3:
    std::cout<<"today is your average day"<<std::endl;
    break;
    case 4:
    std::cout<<"today is your friend day"<<std::endl;
    break;
    case 5:
    std::cout<<"today is your sister day"<<std::endl;
    break;
    default:
    std::cout<<"plz enter value B/W (1-5) "<<std::endl;
        break;
    }
    return 0;
}