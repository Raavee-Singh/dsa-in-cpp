#include<iostream>
#include<array>
#include<vector>
std::vector<int> swapAlternate(std::vector<int>& arr){
    for(int i=0;i+1<arr.size();i+=2){
        std::swap(arr[i],arr[i+1]);
    }
    return arr;
}
void acceptArray(std::vector<int>& arr,int size){
    std::cout<<"Enter the array elements: ";
    for(int i=0;i<size;i++){
        int val;
        std::cin>>val;
        arr.push_back(val);
    }
}
int main(){
    std::vector<int> arr;
    int size;
    std::cout<<"No. of elements in array: ";
    std::cin>>size;
    acceptArray(arr,size);
    std::vector<int> result=swapAlternate(arr);
    std::cout<<"The resultant array is: ";
    for(int x:result){
        std::cout<<x<<" ";
    }
    std::cout<<std::endl;
    return 0;
}