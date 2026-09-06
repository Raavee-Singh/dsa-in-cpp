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
        //std::swap(arr[start],arr[end]);
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
std::array<int,5> reverse(std::array<int,5>& arr){
    int start=0,end=arr.size()-1;
    while(start<=end){
        //std::swap(arr[start],arr[end]);
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    return arr;
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
    std::array<int,5> res = reverse(brr);
    printAgain(res);
    return 0;
}