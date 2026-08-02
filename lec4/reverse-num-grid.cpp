#include<iostream>
int main(){
    int n;
    std::cout<<"Enter the value of n: ";
    std::cin>>n;
    for(int i=n;i>0;i--){
        for(int j=1;j<=n;j++){
            std::cout<<" "<<i<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}