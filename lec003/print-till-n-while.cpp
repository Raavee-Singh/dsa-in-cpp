#include<iostream>
int main(){
    int n;
    std::cout<<"Enter the value of n: ";
    std::cin>>n;
    int i=1;
    while(i<=n){
        std::cout<<i<<" ";
        i++;
    }
    return 0;
}