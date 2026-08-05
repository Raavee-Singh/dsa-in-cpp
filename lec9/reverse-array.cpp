#include<iostream>
int reverseArray(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        std::swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int printArray(int arr[],int size){
    std::cout<<"Array is: ";
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[6]={1,2,3,4,5,6};
    int sizeArr=sizeof(arr)/sizeof(int);
    int sizeBrr=sizeof(brr)/sizeof(int);
    reverseArray(arr,sizeArr);
    printArray(arr,sizeArr);
    reverseArray(brr,sizeBrr);
    printArray(brr,sizeBrr);
    return 0;
}