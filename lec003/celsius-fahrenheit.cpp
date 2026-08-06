#include<iostream>
int main(){
    int cel;
    std::cout<<"Enter the temperature in celsius: ";
    std::cin>>cel;
    float far=(cel*1.8)+32;
    std::cout<<"Temperature in fahrenheit is: "<<far;
    return 0;
}