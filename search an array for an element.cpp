#include<iostream>
int searcharray(int mynum,int size,int number[]);
int main(){
    int number[]={1,2,3,4,5,6,7,8,9,10};
    int mynum;
    int index;
    int size=sizeof(number)/sizeof(number[0]);
    std::cout<<"enter number that you want to search"<<std::endl;
    std::cin>>mynum;
    index=searcharray(mynum,size,number);
    if(index!=-1){
    std::cout<<"element: "<<index<<" your number:"<<mynum<<std::endl;
    }
    else{
    std::cout<<"not in an array"<<mynum<<std::endl;
    }
    return 0;
}
int searcharray(int mynum,int size,int number[]){
for(int i=1;i<size;i++){
if(mynum==number[i]){
return i;
}
}
return -1;
}