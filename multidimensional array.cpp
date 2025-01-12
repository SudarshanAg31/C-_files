#include<iostream>
int main(){
    std::string name[][3]= {{"a","b","c"},
                            {"d","e","f"},
                            {"g","h","i"}};
    int size_row=sizeof(name)/sizeof(name[0]);
    int size_coll=sizeof(name[0])/sizeof(name[0][0]);
    for(int i=0;i<size_row;i++){
        for(int j=0;j<size_coll;j++){
            std::cout<<name[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}