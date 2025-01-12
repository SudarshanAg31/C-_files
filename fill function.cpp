#include<iostream>
int main(){
    //for int or char we use std::fill.
    const int size=99;
   std::string name[size];
    fill(name,name+size/3,"sudarshan");//0-->33
    fill(name+size/3,name+(size/3)*2,"agrawal");//33-->66
    fill(name+(size/3)*2,name+size,"tanvi");//66-->99
    for(std::string names:name){
        std::cout<<names<<std::endl;
    }
    return 0;
}