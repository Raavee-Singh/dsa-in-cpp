#include<iostream>
#include<vector>
void acceptArray(std::vector<int>& arr,int n){
    std::cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        int val;
        std::cin>>val;
        arr.push_back(val);
    }
}
void bubbleSort(std::vector<int>& arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                std::swap(arr[j+1],arr[j]);
            }
        }
    }
}
void printArray(std::vector<int>& arr){
    std::cout<<"The array is: ";
    for(int num:arr){
        std::cout<<num<<" ";
    }
    std::cout<<std::endl;
}
int main(){
    int n;
    std::cout<<"Enter the length of array: ";
    std::cin>>n;
    std::vector<int> arr;
    acceptArray(arr,n);
    printArray(arr);
    bubbleSort(arr,n);
    printArray(arr);
    return 0;
}