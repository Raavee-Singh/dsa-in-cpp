#include<iostream>
void acceptArray(int *arr,int size){
    std::cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
}
int linearSearch(int *arr,int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int binarySearch(int *arr,int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int getKey(){
    std::cout<<"Enter the key to be searched: ";
    int key;
    std::cin>>key;
    return key;
}
int main(){
    int arr[10];
    int size=sizeof(arr)/sizeof(int);
    acceptArray(arr,size);
    int key=getKey();
    std::cout<<"Using linear search: "<<std::endl;
    int result=linearSearch(arr,size,key);
    if(result!=-1){
        std::cout<<"Element found at index: "<<result<<std::endl;
    }
    else{
        std::cout<<"Element not found"<<std::endl;
    }
    std::cout<<std::endl;
    std::cout<<"Using binary Search: "<<std::endl;
    result=binarySearch(arr,size,key);
    if(result!=-1){
        std::cout<<"Element found at index: "<<result<<std::endl;
    }
    else{
        std::cout<<"Element not found"<<std::endl;
    }
    std::cout<<std::endl;
    return 0;
}