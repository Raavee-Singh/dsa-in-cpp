#include<iostream>
int minofArray(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(min>arr[i]){ //min=min(min,arr[i])
            min=arr[i];
        }
    }
    std::cout<<"Minimum element of array is: "<<min<<std::endl;
}
int maxofArray(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    std::cout<<"Maximum of array is: "<<max<<std::endl;
}
int accessArray(int arr[],int size){
    std::cout<<"Enter elements of array: ";
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
    std::cout<<std::endl;
}
int printArray(int arr[],int size){
    std::cout<<"The array is: ";
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
int main(){
    int arr[5];
    int size=sizeof(arr)/sizeof(int);
    accessArray(arr,size);
    printArray(arr,size);
    maxofArray(arr,size);
    minofArray(arr,size);
    return 0;
}