#include<iostream>
int n(char ch[]){
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverseString(char ch[]){
    int start=0,end=n(ch)-1;
    while(start<=end){
        std::swap(ch[start],ch[end]);
        start++;
        end--;
    }
    std::cout<<"Reversed char array is: "<<ch;
}
int main(){
    char ch[10];
    std::cout<<"Enter your name: ";
    std::cin>>ch;
    std::cout<<ch;
    reverseString(ch);
    return 0;
}