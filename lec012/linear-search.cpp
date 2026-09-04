#include<iostream>
int linearSearch(int *arr,int size,int key){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}
void acceptArray(int *arr,int size){
    std::cout<<"Enter the elements of array: ";
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
}
int main(){
    int arr[10];
    int size=sizeof(arr)/sizeof(int); 
    int key;
    acceptArray(arr,size);
    std::cout<<"Enter the element to be searched: ";
    std::cin>>key;
    int result=linearSearch(arr,size,key);
    if(result!=-1){
        std::cout<<"Element found at "<<result<<" (0-indexing)"<<std::endl;
    }
    else{
        std::cout<<"Element not found"<<std::endl;
    }
    return 0;
}