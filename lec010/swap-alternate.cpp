#include<iostream>
void swapAlternate(int arr[],int size){
    int i=0;
    while(i+1<size){
        std::swap(arr[i],arr[i+1]);
        //int temp=arr[i+1];
        //arr[i+1]=arr[i];
        //arr[i]=temp;
        i+=2;
    }
}
void printArray(int arr[],int size){
    std::cout<<"Array is: ";
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[6]={1,2,3,4,5,6};
    swapAlternate(arr,5);
    swapAlternate(brr,6);
    printArray(arr,5);
    std::cout<<std::endl;
    printArray(brr,6);
    return 0;
}