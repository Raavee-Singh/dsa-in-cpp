#include<iostream>
int sumArray(int arr[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int acceptArray(int arr[],int size){
    std::cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
}
int main(){
    int arr[5];
    int size=sizeof(arr)/sizeof(int);
    acceptArray(arr,size);
    int result=sumArray(arr,size);
    std::cout<<"The sum of elements of the array: "<<result<<std::endl;

}