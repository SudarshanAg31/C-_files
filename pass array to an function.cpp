#include<iostream>
double call(double price[],int size);
int main(){
double price[]={12.12,13.53,43.43,54.65,12.32};
int size=sizeof(price)/sizeof(price[0]);
    double value=call(price,size);
    std::cout<<"$ "<<value<<std::endl;
 return 0;
}
double call(double price[],int size){
double value=0;
for(int i=0;i<size;i++){
value=value+price[i];
}
return value;
}