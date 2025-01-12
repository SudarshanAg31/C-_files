#include<iostream>
template<typename t, typename s>

auto max(t x,s y){
    return (x>y)?x:y;
}

int main(){
    std::cout<<max(21,21.54);
    return 0;
}