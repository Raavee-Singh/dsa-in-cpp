#include<iostream>
int power(int a, int b){
    int result=a;
    for(int i=1;i<b;i++){
        result=result*a;
    }
    std::cout<<a<<" to the power "<<b<<" is: "<<result<<std::endl;
}
int main(){
    int a,b;
    std::cout<<"Enter the numbers: ";
    std::cin>>a>>b;
    power(a,b);
    return 0;
}