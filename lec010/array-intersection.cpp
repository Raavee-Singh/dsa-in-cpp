#include<iostream>
#include<vector>
#include<algorithm>
std::vector<int> findArrayIntersection(std::vector<int> &arr1,std::vector<int> &arr2){
    std::vector<int> ans;
    for(int i=0;i<arr1.size();i++){
        int element = arr1[i];
        for(int j=0;j<arr2.size();j++){
            if(element<arr2[j]){
                break;
            }
            if(element==arr2[j]){
                ans.push_back(element);
                arr2[j]=-18224;
                break;
            }
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
    std::vector<int> arr1;
    int n;
    std::cout<<"Enter the size of first vector: ";
    std::cin>>n;
    acceptVector(arr1,n);
    std::vector <int> arr2;
    std::cout<<"Enter the size of second vector: ";
    std::cin>>n;
    acceptVector(arr2,n);    

    std::vector<int> a=findArrayIntersection(arr1,arr2);
    std::cout<<"The intersection in the two arrays is: ";
    for(int n:a){
        std::cout<<n<<" ";
    }
    std::cout<<std::endl;
    return 0;
}