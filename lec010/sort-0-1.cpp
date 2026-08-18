#include<iostream>
#include<algorithm>
void sortNum(int *arr,int size){
    int i=0,j=size-1;
    while(i<j){
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1 && i<j){
            j--;
        }
        std::swap(arr[i],arr[j]);
        i++;
        j--;
    
    }
}
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
}
int main(){
    int arr[7];
    acceptArray(arr,7);
    sortNum(arr,7);
    printArray(arr,7);
    return 0;
}