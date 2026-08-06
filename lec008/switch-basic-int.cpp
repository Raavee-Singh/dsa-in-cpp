#include<iostream>
int main(){
    int choice;
    std::cout<<"Enter your choice: ";
    std::cin>>choice;
    switch(choice){
        case 1:
        std::cout<<"You entered one!"<<std::endl;
        break;
        case 2:
        std::cout<<"You entered two!"<<std::endl;
        break;
        default:
        std::cout<<"Wrong input! Try again!"<<std::endl;
        break;
    }
    return 0;
}