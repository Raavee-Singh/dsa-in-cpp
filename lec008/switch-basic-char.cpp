#include<iostream>
int main(){
    char choice;
    std::cout<<"Enter your choice: ";
    std::cin>>choice;
    switch(choice){
        case 'a':
        std::cout<<"a";
        break;
        case 'A':
        std::cout<<"A";
        break;
        default:
        std::cout<<"Wrong input";
        break;
    }
}