#include<iostream>
void acceptArray(int *arr,int size){
    std::cout<<"Enter the length of array: ";
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
    
}
int main(){
    int arr[6];
    acceptArray(arr,6);
}