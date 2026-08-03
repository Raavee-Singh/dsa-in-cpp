#include<iostream>
int printarray(int arr[], int size){
    std::cout<<"Array is: "<<std::endl;
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" "; 
    }
    std::cout<<std::endl;
}
int acceptarray(int arr[],int size){
    std::cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
}
int main(){
    int arr[5];
    int size=sizeof(arr)/sizeof(int);
    acceptarray(arr,size);
    printarray(arr,size);
    return 0;
}