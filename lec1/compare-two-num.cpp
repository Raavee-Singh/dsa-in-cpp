#include<iostream>
int main(){
    int a,b;
    std::cout<<"Enter a and b: ";
    std::cin>>a>>b;
    std::cout<<"You entered: "<<a<<" "<<b<<std::endl;
    if(a>b){
        std::cout<<"a is bigger"<<std::endl;
    }
    else if(a<b){
        std::cout<<"b is bigger"<<std::endl;
    }
    else{
        std::cout<<"equal"<<std::endl;
    }
    return 0;
}
