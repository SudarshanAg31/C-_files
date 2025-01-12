#include<iostream>
int main(){
    std::string name[]={"sudarshan","tanvi","sagar","harshit","dhruv"};
    std::cout<<sizeof(name)/sizeof(name[0])<<" elements"<<std::endl;
    return 0;
}