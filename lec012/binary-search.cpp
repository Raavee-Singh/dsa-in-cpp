#include<iostream>
void acceptArray(int *arr,int size){
    std::cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
}
int binarySearch(int *arr,int size,int key){ //time: O(log n)
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int acceptKey(){
    int key;
    std::cout<<"Enter the key to be searched: ";
    std::cin>>key;
    return key;

}
int main(){
    int arr[6];
    acceptArray(arr,6);
    int key=acceptKey();
    int result=binarySearch(arr,6,key);
    if(result!=-1){
        std::cout<<"Element found at: "<<result<<std::endl;
    }
    else{
        std::cout<<"Element not found."<<std::endl;
    }
    int brr[5];
    acceptArray(brr,5);
    key=acceptKey();
    result=binarySearch(brr,5,key);
    if(result!=-1){
        std::cout<<"Element found at: "<<result<<std::endl;
    }
    else{
        std::cout<<"Element not found."<<std::endl;
    }
    return 0;
}