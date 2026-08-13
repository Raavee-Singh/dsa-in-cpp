#include<iostream>
int main(){
    int a;
    std::cout<<"Enter the value of a: ";
    std::cin>>a;
    std::cout<<"Pre-increment: "<<++a<<std::endl; 
    std::cout<<"Post-increment: "<<a++<<std::endl;
    std::cout<<"Pre-decrement: "<<--a<<std::endl;
    std::cout<<"Post-decrement: "<<a--<<std::endl;
    for(int i=0;i<10;i++){
        if(i==4){
            continue;
        }
        if(i==6){
            break;
        }
        std::cout<<i<<std::endl;
    }
    return 0;
}