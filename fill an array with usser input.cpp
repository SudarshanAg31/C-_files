#include<iostream>
int main(){
    std::string name[5];
    std::string temp;
    int size=sizeof(name)/sizeof(name[0]);

    for(int i=0;i<size;i++){
        std::cout<<i+1<<" enter your name or if you what to exit enter 'q': ";
        std::getline(std::cin,temp);
        if(temp=="q"){
            break;
        }
        else{
            name[i]=temp;
        }
    }

    for(int i=0;!name[i].empty();i++){
        std::cout<<name[i]<<std::endl;
    }
    return 0;
}