#include<iostream>
#include<vector>
void printArray(std::vector<int>& arr){
    std::cout<<"The array is: ";
    for(int num:arr){
        std::cout<<num<<" ";
    }
    std::cout<<std::endl;
}
void acceptArray(std::vector<int>& arr,int n){
    std::cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        int val;
        std::cin>>val;
        arr.push_back(val);
    }
}
std::vector<int> selectSort(std::vector<int>& arr,int n){
    for(int i=0;i<n-1;i++){
        int smallest=i;
        for(int j=i+1;j<n;j++){
            if(arr[smallest]>arr[j]){
                smallest=j;
            }
        }
        std::swap(arr[smallest],arr[i]);
    }
    return arr;
}
int main(){
    std::vector<int> arr;
    int n;
    std::cout<<"Enter the length of array: ";
    std::cin>>n;
    acceptArray(arr,n);
    printArray(arr);
    arr=selectSort(arr,n);
    printArray(arr);
    return 0;
}