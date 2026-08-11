#include<iostream>
int findDup(int *arr,int size){
    //arr={1,2,3,4,5,....,10,3}//find 3
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<size;i++){
        ans=ans^i;
    }
    return ans;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,4};
    int result= findDup(arr,10);
    std::cout<<"Duplicate is: "<<result;
    return 0;
}