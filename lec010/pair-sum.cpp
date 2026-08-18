#include<iostream>
#include<vector>
#include<algorithm>
std::vector<std::vector <int>> pairSum(std::vector<int> &arr, int s){
    std::vector<std::vector<int>> ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==s){
                std::vector<int> temp;
                temp.push_back(std::min(arr[i],arr[j]));
                temp.push_back(std::max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    std::sort(ans.begin(),ans.end());
    return ans;
}
void acceptVector(std::vector<int> &a, int n){
    std::cout<<"Enter the elements of vector: ";
    for(int i=0;i<n;i++){
        int val;
        std::cin>>val;
        a.push_back(val);
    }
}
int main(){
    std::vector<int> a;
    int n,s;
    std::cout<<"Enter the length of vector: ";
    std::cin>>n;
    std::cout<<"Enter the pair sum: ";
    std::cin>>s;
    acceptVector(a,n);
    std::vector<std::vector<int>> result = pairSum(a,s);
    std::cout<<"The pair sum is: "<<std::endl;
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            std::cout<<result[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}