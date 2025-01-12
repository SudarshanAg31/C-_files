#include<iostream>
//when we pass value to the function it simplay copy the value not original value 
//is pass to the function so that time we use menory address to give orignal to 
//the function
void swyp(std::string &x,std::string &y);
int main(){
    std::string x="fire";
    std::string y="water";  
    swyp(x,y);
    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;
    return 0;
}
void swyp(std::string &x,std::string &y){
    std::string temp;
    temp=x;
    x=y;
    y=temp;
}