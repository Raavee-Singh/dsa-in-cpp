#include<iostream>
int uniqueArray(int arr[],int size){//int arr[]=int *arr
    int uniqueElement=0;
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[5]={1,2,1,3,2};
    int result=uniqueArray(arr,5);
    std::cout<<result;
    return 0;
}