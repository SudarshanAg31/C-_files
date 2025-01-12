#include<iostream>
int main(){
    for(int i=10;i>=1;i--)
    {
        //if(5==i){
       //     break;
        //}
        if(i==5){
            continue;
        }
        std::cout<<i<<std::endl;
    }
    return 0;
}