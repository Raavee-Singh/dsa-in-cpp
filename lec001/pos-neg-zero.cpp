#include<iostream>
int main(){
    int a;
    std::cout<<"Enter the value of a: ";
    std::cin>>a;
    if(a>0){
        std::cout<<"positive"<<std::endl;
    }
    else if(a<0){
        std::cout<<"negative"<<std::endl;
    }
    else{
        std::cout<<"zero"<<std::endl;
    }
    return 0;
}