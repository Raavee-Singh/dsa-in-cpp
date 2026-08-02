#include<iostream>
int main(){
    char ch;
    std::cout<<"Enter the char: ";
    std::cin>>ch;
    if(ch >='a' && ch <='z'){
        std::cout<<"lowercase"<<std::endl;
    }
    else if(ch>='A' && ch<='Z'){
        std::cout<<"uppercase"<<std::endl;
    }
    else if(ch>='0' && ch<='9'){
        std::cout<<"numeric"<<std::endl;
    }
    else{
        std::cout<<"invalid input"<<std::endl;
    }
    return 0;
}