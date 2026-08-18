#include<iostream>
#include<algorithm>
#include<vector>
void acceptArray(int *arr,int size){
    std::cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
}
void swapAlternate(int *arr,int size){
    int i=0;
    while(i+1<size){
        std::swap(arr[i],arr[i+1]);
        i+=2;
    }
}
void printArray(int *arr, int size){
    std::cout<<"The array is: ";
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5];
    int brr[6];
    acceptArray(arr,5);
    swapAlternate(arr,5);
    printArray(arr,5);
    std::cout<<std::endl;
    acceptArray(brr,6);
    swapAlternate(brr,6);
    printArray(brr,6);
    return 0;
}