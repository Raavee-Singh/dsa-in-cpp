#include<iostream>
int main(){
    int n;
    std::cout<<"Enter the length of series: ";
    std::cin>>n;
    for(int i=2;i<=n;i+=2){ //int i=1 for odd series
        std::cout<<i<<" ";
    }
    return 0;
}