#include<iostream>
//varible that store a memory addressof another varible
//sometime it's easier to work with an address
int main(){
    std::string free[]={"apple1","apple2","apple3","apple4"};
    std::string name="sudarshan";
    std::string *pNane=&name;
    std::string *pfree=free;
    std::cout<<*pNane<<std::endl;
    std::cout<<*pfree;
    return 0;
}