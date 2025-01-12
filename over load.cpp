#include<iostream>
void name();
void name(std::string bro);
void name(std::string bro,std::string bro1);
int main(){
    name("dhruv","shriyansh");
    return 0;
}
void name(){
    std::cout<<"hello sudarshan"<<std::endl;
}
void name(std::string bro){
    std::cout<<"hello sudarshan"<<std::endl<<"hello "<<bro<<std::endl;
}
void name(std::string bro,std::string bro1){
    std::cout<<"hello sudarshan"<<std::endl<<"hello "<<bro<<std::endl<<"hello "<<bro1<<std::endl;
}