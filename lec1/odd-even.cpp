#include<iostream>
int main(){
    int a;
    std::cout<<"Enter the value of a: ";
    std::cin>>a;
    if(a%2==0){
        std::cout<<"even"<<std::endl;
    }
    else{
        std::cout<<"odd"<<std::endl;
    }
    return 0;
}