#include<iostream>
int acceptArray(int arr[], int size){
    std::cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
}
int linearSearch(int arr[],int key,int size){
    bool found=false;
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            found=true;
        }
    }
    if(found){
        std::cout<<"Key present in array."<<std::endl;
    }
    else{
        std::cout<<"Key not found."<<std::endl;
    }
}
int main(){
    int arr[5];
    int size=sizeof(arr)/sizeof(int);
    acceptArray(arr,size);
    int key;
    std::cout<<"Enter key to search: ";
    std::cin>>key;
    linearSearch(arr,key,size);
    return 0;
}