#include<iostream>
std::string add(std::string name ,std::string name1){//type name(...)
    std::string result=name+"_"+name1;//type namee=*+-/
    return result;//return namee
}
int main(){
    std::string name;//varible
    std::cin>>name;//input
    std::string name1;//varible1
    std::cin>>name1;//input1
  std::string result=add(name,name1);//type namee= name(...)
    std::cout<<result<<std::endl;//namee
    return 0;
}