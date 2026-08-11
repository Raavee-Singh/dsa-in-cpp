#include<iostream>
void printArray(int *arr, int size){
    std::cout<<"The array is: ";
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
void acceptArray(int *arr, int size){
    std::cout<<"Enter the array: ";
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
}
void sumArray(int *arr,int size){
    std::cout<<"Sum of elements of array is: ";
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    std::cout<<sum<<std::endl;
}
void maxArray(int *arr,int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    std::cout<<"Max Term is: "<<max<<std::endl;
}
void linearSearch(int *arr,int size){
    int key;
    std::cout<<"Enter the key to be searched: ";
    std::cin>>key;
    bool found=false;
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            found=true;
        }
    }
    if(found==true){
        std::cout<<"Key found"<<std::endl;
    }
    else{
        std::cout<<"Not found"<<std::endl;
    }
}
void reverseArray(int *arr,int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        std::swap(arr[start],arr[end]);
        start+=1;
        end-=1;
    }
    std::cout<<"Reversed array is: ";
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}
int main(){
    int arr[6];
    int brr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    acceptArray(arr,size);
    printArray(arr,size);
    sumArray(arr,size);
    maxArray(arr,size);
    linearSearch(arr,size);
    reverseArray(arr,size);
    reverseArray(brr,5);
    return 0;
}