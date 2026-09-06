#include<iostream>
#include<array>
void acceptArray(int *arr,int size){
    std::cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
}
void printArray(int *arr,int size){
    std::cout<<"The array is: ";
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
void acceptAgain(std::array<int, 5>& arr){
    std::cout<<"Enter the elements of array: ";
    for(int i=0;i<5;i++){
        std::cin>>arr[i];
    }
}
void printAgain(std::array<int, 5>& arr){
    std::cout<<"The array is: ";
    for(int i=0;i<5;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
void reverseArray(int *arr,int size){
    int start=0,end=size-1;
    while(start<=end){
        std::swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[5];
    std::array<int,5> brr;
    int size;
    size=sizeof(arr)/sizeof(int);
    acceptArray(arr,size);
    printArray(arr,size);
    reverseArray(arr,size);
    printArray(arr,size);
    std::cout<<std::endl;
    size=brr.size();
    acceptAgain(brr);
    printAgain(brr);
    return 0;
}