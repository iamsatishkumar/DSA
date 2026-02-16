/*Pair Sum
[1,2,7,11,15,5,9]*/
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void pairSum(vector<int> nums,int target){
    int comp;
    unordered_map<int,int> m;

    for(int i=0; i<nums.size(); i++){
        comp=target-nums[i];
        if(m.count(comp)){
            cout<<"{"<<m[comp]<<","<<i<<"}";
            return;
        }
        m[nums[i]]=i;

    }

}
int main(){
    vector<int> nums={1,2,7,11,15,5,9};
    int target=9;
    pairSum(nums,target);
    return 0;
}