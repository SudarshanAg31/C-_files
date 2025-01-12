#include<iostream>

// this is irrecursion approch...

/*void walk(int step);
int main(){
    walk(100);
    return 0;
}
void walk(int step){
    for(int i=0;i<step;i++){
        std::cout<<i+1<<" you take a step!"<<std::endl;
    }
}
*/

// this is recursion approch... example 1:-

void walk(int step);
int main(){

walk(100);
}
void walk(int step){// so step=100
    if(step > 0){// in this case 100>0 so if conduction will be true;
        std::cout<<"you take a step"<<std::endl;
        walk(step-1);//every time after print "you take a step" it reduce by 1
        //until our if conduction is false...
        
    }
}




