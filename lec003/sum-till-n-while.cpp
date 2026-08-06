#include<iostream>
int main(){
    int n;
    std::cout<<"Enter the value of n: ";
    std::cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        sum+=i;
        i++; //i+=2 and int i=2 for sum of even numbers till n
    }
    std::cout<<"Sum is: "<<sum<<std::endl;
    return 0;
}