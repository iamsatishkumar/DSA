/*Sliding Window Maximium
Maximum of all "Subarray of size k"*/
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
/* in case of priority queue of pair by default maxHeap is built on the basis of first val of pair*/

void slidingWindowMax(vector<int> arr,int k){
    priority_queue<pair<int,int>> pq;
    vector<int> ans;

    //1st window
    for(int i=0; i<k; i++){
        pq.push(make_pair(arr[i],i));
    }
    ans.push_back(pq.top().first);


    for(int i=k; i<arr.size(); i++){
        while(!pq.empty() && pq.top().second <= (i-k)){
            pq.pop();
        }
        pq.push(make_pair(arr[i],i));
        ans.push_back(pq.top().first);
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<", ";
    }
}
int main(){
    vector<int> num={1,3,-1,-3,5,3,6,7};
    int k=3;
    slidingWindowMax(num,k);
    return 0;

}