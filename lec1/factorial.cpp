#include<iostream>
int fact(int a){
    if(a==0){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}
int main(){
    int a;
    std::cout<<"Enter the value of a: ";
    std::cin>>a;
    int res=fact(a);
    std::cout<<"factorial is: "<<res<<std::endl;
}