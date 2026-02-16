/*Majority Element
Find elements that appear more than n/3 times
[1,3,2,5,1,3,1,5,1]*/

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void majorityElement(vector<int> nums){
    unordered_map<int,int> m;//(nums[i],freq)

    for(int i=0; i<nums.size(); i++){
        if(m.count(nums[i])){
            m[nums[i]]++;
        }else{
            m[nums[i]]=1;
        }
    }
    for(pair<int,int> p : m){
        int freq=nums.size()/3;
        if(p.second >= freq){
            cout<<p.first<<" ";
        }
        
    }
    cout<<endl;
}
int main(){
    vector<int> nums1={1,3,2,5,1,3,1,5,1};
    vector<int> nums2={1,2};
    majorityElement(nums2);
    return 0;
}