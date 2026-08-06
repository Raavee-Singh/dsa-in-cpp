#include<iostream>
int main(){
    int a,b,c;
    std::cout<<"Enter three sides of a triangle: ";
    std::cin>>a>>b>>c;
    if((a+b)>c){
        if((b+c)>a){
            if((a+c)>b){
                std::cout<<"valid triangle"<<std::endl;
            }
        }
    }
    else{
        std::cout<<"not a valid triangle"<<std::endl;
    }
}