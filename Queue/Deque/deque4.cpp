/*sliding window maximum*/
#include<iostream>
#include<deque>
#include<algorithm>
#include<vector>
using namespace std;
void slidingWindowMax(vector<int> arr,int k){
    deque<pair<int,int>> dq;
    vector<int> ans;
    for(int i=0; i<k; i++){
        dq.push_back(make_pair(arr[i],i));
    }
    sort(dq.begin(),dq.end(),
    [](pair<int,int> &p1,pair<int,int> &p2){
        return p1.first < p2.first; 
    });
    ans.push_back(dq.back().first);
    for(int i=k; i<arr.size(); i++){
        while(!dq.empty() && dq.back().second <= (i-k)){
            dq.pop_back();
        }

        dq.push_back(make_pair(arr[i],i));
        ans.push_back(dq.back().first);
    }
    cout<<"max sliding Window : ";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr={1,3,-1,-3,5,3,6,7};
    int k=3;
    slidingWindowMax(arr,k);
    return 0;
}