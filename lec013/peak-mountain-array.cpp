#include<iostream>
void acceptArray(int *arr,int size){
    std::cout<<"Enter the array elements: ";
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
}
int peakMountain(int *arr,int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        
    }
}
void printArray(int *arr,int size){
    std::cout<<"The array is: ";
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
int main(){
    int arr[6];
    acceptArray(arr,6);
    printArray(arr,6);
}