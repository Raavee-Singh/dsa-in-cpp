#include<iostream>
#include<algorithm>
#include<vector>
std::vector<std::vector<int>> tripletSum(std::vector<int> &arr,int n,int s){
    std::vector<std::vector<int>> ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==s){
                    std::vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    ans.push_back(temp);
                }
            }
        }
    }
    std::sort(ans.begin(),ans.end());
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
    std::vector<int> a;
    int n;
    std::cout<<"Enter the length of vector: ";
    std::cin>>n;
    int s;
    std::cout<<"Enter the desired sum: ";
    std::cin>>s;
    acceptVector(a,n);
    std::vector<std::vector<int>> result=tripletSum(a,n,s);
    std::cout<<"Triple sum is: ";
    if(result.empty()){
        std::cout<<"Not found. No such triplet in the vector."<<std::endl;
    }
    else{
        for(int i=0;i<result.size();i++){
            for(int j=0;j<result[i].size();j++){
                std::cout<<result[i][j]<<" ";
            }
            std::cout<<std::endl;
        }
    }
   
    return 0;
}