#include<iostream>
#include<vector>
std::vector<int> acceptArray(std::vector<int>& arr){
    int n;
    std::cout<<"Enter the length of array: ";
    std::cin>>n;
    std::cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        int val;
        std::cin>>val;
        arr.push_back(val);
    }
    return arr;
}
std::vector<int> selectSort(std::vector<int>& arr){
    for(int i=0;i<arr.size()-1;i++){
        int smallest=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[smallest]>arr[j]){
                smallest=j;
            }
        }
        std::swap(arr[smallest],arr[i]);
    }
    return arr;
}
void printArray(std::vector<int>& arr){
    for(int num:arr){
        std::cout<<num<<" ";
    }
}
int main(){
    std::vector<int> arr;
    arr=acceptArray(arr);
    arr=selectSort(arr);
    printArray(arr);
    return 0;
}