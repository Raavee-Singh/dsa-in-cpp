#include<iostream>
#include<vector>
void acceptArray(std::vector<int>& arr){
    int n;
    std::cout<<"Enter the length of array: ";
    std::cin>>n;
    std::cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        int val;
        std::cin>>val;
        arr.push_back(val);
    }
}
void bubbleSort(std::vector<int>& arr){

}
void printArray(std::vector<int>& arr){
    for(int num:arr){
        std::cout<<num<<" ";
    }
    std::cout<<std::endl;
}
int main(){
    std::vector<int> arr;
    acceptArray(arr);
    bubbleSort(arr);
    printArray(arr);
    return 0;
}