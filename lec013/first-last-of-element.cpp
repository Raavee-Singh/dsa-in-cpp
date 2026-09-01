#include<iostream>
int firOcc(int *arr,int size,int key){
    int ans=0;
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastOcc(int *arr,int size,int key){
    int ans=0;
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
void acceptArray(int *arr, int size){
    std::cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
}
int main(){
    int arr[6];
    acceptArray(arr,6);
    int key;
    std::cout<<"Enter the element to be searched: ";
    std::cin>>key;
    std::pair<int,int> p;
    p.first=firOcc(arr,6,key);
    p.second=lastOcc(arr,6,key);
    std::cout<<"The first and last position of "<<key<<" is: ";
    std::cout<<p.first<<", "<<p.second<<std::endl;
    return 0;
}