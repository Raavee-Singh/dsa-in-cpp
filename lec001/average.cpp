#include<iostream>
int main(){
    int a,b,c;
    std::cout<<"Enter the value of a,b,c: ";
    std::cin>>a>>b>>c;
    std::cout<<"You entered : "<<a<<" "<<b<<" "<<c<<std::endl;
    int avg=(a+b+c)/3;
    std::cout<<"Average is: "<<avg;
    return 0;
}