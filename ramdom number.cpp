#include<iostream>
#include<ctime>
int main(){
    srand(time(0));
    int number=(rand()%6)+1;
    std::cout<<number;
    return 0;
}