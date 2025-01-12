#include<iostream>
//through const we can't change value of x
int num(const int x);
int main(){
    int x=10;
    int y=num(x);
    std::cout<<y;
    return 0;
}
int num(const int x){
    x++;
    return x;
}