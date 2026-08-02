#include<iostream>
int main(){
    int n;
    std::cout<<"Enter the value of n: ";
    std::cin>>n;
    for(int i=0;i<n;i++){
        int m=n;
        for(int j=0;j<n;j++){
            std::cout<<" "<<m<<" ";
            m--;
        }
        std::cout<<std::endl;
    }
}