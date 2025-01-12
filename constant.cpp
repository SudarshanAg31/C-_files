#include<iostream>
int main() {
    // through this no one change the value of pi
    // we change pi in upper case
    const double PI=3.14569;
    int radious=10;
    double circlefrance=PI*radious*2;
    std::cout<<circlefrance<<std::endl;
    return 0;
}