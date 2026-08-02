#include<iostream>
int main(){
    int a;
    std::cout<<"Enter the value of a: ";
    std::cin>>a;
    if(a<=0){
        std::cout<<"not prime"<<std::endl;
    }
    else{
        bool found=true;
        for(int i=2;i<a;i++){
            if(a%i==0){
                found=false;
                break;
            }
        }
        if(found){
            std::cout<<"prime"<<std::endl;
        }
        else{
            std::cout<<"not prime"<<std::endl;
        }
    }
    return 0;
}
 