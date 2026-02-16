/*Union & Intersection
nums1=[7,3,1]  nums2=[6,3,9,6,2,4] */
#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
void Union(vector<int> nums1,vector<int> nums2){
    unordered_set<int> s;
    //inserting elem from arr1
    for(int i=0; i<nums1.size(); i++){
        s.insert(nums1[i]);
    }
    //insering elem from arr2 
    for(int i=0; i<nums2.size(); i++){
        s.insert(nums2[i]);
    }
    cout<<"union : ";
    for(auto it : s){
        cout<<it<<" ";
    }
    cout<<endl;
}
void Intersection(vector<int> nums1,vector<int> nums2){
    unordered_set<int> s(nums1.begin(),nums1.end());//set of nums
    unordered_set<int> ans;

    for(int i=0; i<nums2.size(); i++){
        if(s.count(nums2[i])){
            ans.insert(nums2[i]);
        }
    }
    
    cout<<"intersection : ";
    for(auto it : ans){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> nums1={7,3,9};
    vector<int> nums2={6,3,9,6,2,4};
    Union(nums1,nums2);
    Intersection(nums1,nums2);
    return 0;
}