#include<iostream>
int main(){
    int a;
    std::cout<<"Enter the value of a: ";
    std::cin>>a;
    std::cout<<"Pre-increment: "<<++a<<std::endl; 
    std::cout<<"Post-increment: "<<a++<<std::endl;
    std::cout<<"Pre-decrement: "<<--a<<std::endl;
    std::cout<<"Post-decrement: "<<a--<<std::endl;
    return 0;
}