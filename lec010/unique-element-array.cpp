#include<iostream>
int acceptArray(int arr[],int size){
    std::cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
}
int uniqueArray(int arr[],int size){//int arr[]=int *arr
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[5];
    int size=sizeof(arr)/sizeof(int);
    acceptArray(arr,size);
    int result=uniqueArray(arr,size);
    std::cout<<result;
    return 0;
}