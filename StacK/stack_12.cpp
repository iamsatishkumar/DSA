/*next greater element = first greater element that is right
to the current element
arr=[6,8,0,1,3]   ans=[8,-1,0,1,-1]*/
#include<bits/stdc++.h>
using namespace std;
void Ge(vector<int> arr,vector<int> ans){
    stack<int> s;
    int idx=arr.size()-1;
    ans[idx]=-1;
    s.push(arr[idx]);
    for(idx=idx-1; idx>=0; idx--) {
        int currElement=arr[idx];
        while(!s.empty() && currElement>s.top()) {
            s.pop();
        }
        if(s.empty()) {
            ans[idx]=-1;
        } else{
            ans[idx]=s.top();
        }
        s.push(currElement);
    }
    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<",";
    }


}
int main() {
    vector<int> arr={6,8,0,1,3};
    vector<int> ans={0,0,0,0,0};
    Ge(arr,ans);
    return 0;
}