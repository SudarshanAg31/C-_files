#include<iostream>
namespace first{
    int x=10;
}
namespace second{
    int x= 100;
}
int main (){
    using std::cout;
    cout<<first::x<<std::endl;
    cout<<"sudarshan";
    return 0;
}