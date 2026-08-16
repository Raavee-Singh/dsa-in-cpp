#include<iostream>
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
void swapAlternate(int *arr,int size){
    int i=0;
    while(i+1<size){
        //std::swap(arr[i],arr[i+1]);
        int temp=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;
        i+=2;
    }
}
int findUnique(int *arr,int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int findDuplicate(int *arr,int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<size;i++){
        ans=ans^i;
    }
    return ans;
}
int main(){
    int arr[7];
    int size=sizeof(arr)/sizeof(int);
    acceptArray(arr,size);
    swapAlternate(arr,size);
    printArray(arr,size);
    std::cout<<"The unique number in the array is: "<<findUnique(arr,size)<<std::endl;
    int ans=findDuplicate(arr,size);
    std::cout<<"The number which appears two times in the array is: "<<ans;
    return 0;
}