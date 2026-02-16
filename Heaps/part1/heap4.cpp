/* priority queue (PQ) for Pairs
default pq for pairs ---> maxHeap on the basis of pair "first" value */
#include<iostream>
#include<string>
#include<queue>
using namespace std;
int main(){
    priority_queue<pair<string, int>> pq;//default -- maxHeap; on basis of pair "first"

    pq.push(make_pair("aman", 85));
    pq.push(make_pair("bhumika", 95));
    pq.push(make_pair("chetan", 65));


    while(!pq.empty()){
        cout<<"top = "<<pq.top().first<<", "<<pq.top().second<<endl;
        pq.pop();
    }
    return 0;
}