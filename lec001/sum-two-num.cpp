#include<iostream>
int main(){
    int a,b;
    std::cout<<"Enter the values of a and b: ";
    std::cin>>a>>b;
    std::cout<<"You entered: "<<a<<" and "<<b<<std::endl;
    int sum=a+b;
    std::cout<<"Sum is: "<<sum;
    return 0;
}