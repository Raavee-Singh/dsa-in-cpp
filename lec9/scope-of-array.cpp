#include<iostream>
int update(int arr[],int size){
    arr[0]=120;
    std::cout<<"Array is: ";
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
int main(){
    int arr[5]={1,2,3};
    int size=sizeof(arr)/sizeof(int);
    update(arr,size); //base address of array is passed
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}