#include<iostream>
enum day{monday,tuesday,wednesday,thursday,friday,saturday,sunday};
int main(){
    day today=saturday;
    switch(today){
        case monday: std::cout<<" today is monday"<<std::endl;
        break;
        
        case tuesday: std::cout<<" today is tuesday"<<std::endl;
        break;
        
        case wednesday: std::cout<<" today is wednesday"<<std::endl;
        break;
        
        case thursday: std::cout<<" today is thursday"<<std::endl;
        break;
        
        case friday: std::cout<<" today is friday"<<std::endl;
        break;
        
        case saturday: std::cout<<" today is saturday"<<std::endl;
        break;
        
        case sunday: std::cout<<" today is sunday"<<std::endl;
    }
    return 0;
}