#include<iostream>
#include<algorithm>
#include<vector>
std::vector<int> arrayIntersection(std::vector<int> &arr1,std::vector<int> &arr2){
    std::vector<int> ans;
    int i=0,j=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}
void acceptVector(std::vector<int> &a,int n){
    std::cout<<"Enter the elements of vector: ";
    for(int i=0;i<n;i++){
        int val;
        std::cin>>val;
        a.push_back(val);
    }
}
int main(){
    int n=0;
    std::vector<int> a;
    std::cout<<"Enter the length of first array: ";
    std::cin>>n;
    acceptVector(a,n);
    std::vector<int> b;
    std::cout<<"Enter the length of second array: ";
    std::cin>>n;
    acceptVector(b,n);
    std::vector<int> result=arrayIntersection(a,b);
    std::cout<<"Array Intersection is: ";
    for(int i:result){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    return 0;
}