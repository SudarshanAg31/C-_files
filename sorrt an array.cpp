#include<iostream>
void sortarray(int array[],int size);
int main(){
    int array[]={10,2,3,8,4,9,6,7,1,5};
    int size=sizeof(array)/sizeof(array[0]);
    sortarray(array,size);
    for(int array:array){
        std::cout<<array<<" ";
    }
    return 0;
}
void sortarray(int array[],int size){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}