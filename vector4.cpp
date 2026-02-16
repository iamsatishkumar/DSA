//pair sum 
//sorted method(two pointer approach)
#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int> arr,int target){
    int start=0, end=arr.size()-1;
    int CurrSum=0;
    vector<int> ans;
    while(start < end){
        CurrSum=arr[start]+arr[end];
        if(CurrSum == target){
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if(CurrSum < target){
            start++;
        }else{
            end--;
        }
    }
    return ans;
}
int main(){
    vector<int> arr={2,7,11,15};
    vector<int> Ans=pairSum(arr,9);
    cout<<Ans[0]<<","<<Ans[1]<<endl;
    return 0;
}