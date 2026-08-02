#include<iostream>
int main(){
    int p,r,t;
    std::cout<<"Enter the value of p,r and t: ";
    std::cin>>p>>r>>t;
    int res=(p*r*t)/100;
    std::cout<<"Simple Interest is: "<<res<<std::endl;
    return 0;
}