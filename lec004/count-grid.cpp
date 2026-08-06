#include<iostream>
int main(){
    int n;
    std::cout<<"Enter the value of n: ";
    std::cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            std::cout<<" "<<count<<" ";
            count++; 
        }
        std::cout<<std::endl;
    }
}