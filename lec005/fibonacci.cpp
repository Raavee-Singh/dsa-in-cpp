#include<iostream>
int main(){
    int a=0,b=1,n;
    std::cout<<"Enter the length of series: ";
    std::cin>>n;
    std::cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int next=a+b;
        std::cout<<next<<" ";
        a=b;
        b=next;
    }
    std::cout<<std::endl;
    return 0;
}