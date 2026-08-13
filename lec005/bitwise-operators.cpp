#include<iostream>
int main(){
    int a,b;
    std::cout<<"Enter the values of a and b: ";
    std::cin>>a>>b;
    std::cout<<"a & b: "<<(a & b)<<std::endl; //bitwise and
    std::cout<<"a | b: "<<(a|b)<<std::endl; //bitwise or
    std::cout<<"~ a: "<<(~a)<<std::endl; //bitwise not
    std::cout<<"a ^ b: "<<(a^b)<<std::endl; //bitwise xor
    std::cout<<"Left shift: a<<b: "<<(a<<b)<<std::endl; //left shift x2
    std::cout<<"Right shift: a>>b: "<<(a>>b)<<std::endl; //right shift /2
    //if left shift used for big no., then makes negative number
    return 0;
}