/*Connect N Ropes
if cost to connect 2 ropes = sum of their lengths
Find "min cost" to connect N ropes
rope length={4,3,2,6}*/
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void connectNropes(vector<int> vec,int N){
    priority_queue<int,vector<int>,greater<int>> pq(vec.begin(),vec.end());
    int cost=0;
    while(!pq.empty()){
        int min1=pq.top();
        pq.pop();
        int min2=pq.top();
        pq.pop();
        int currlength=min1+min2;//new rope =(sum of two min ropes)
        if(!pq.empty()){
            pq.push(currlength);
        }
        
        cost += currlength;  
    }
    cout<<"min cost : "<<cost<<endl;
}
int main(){
    vector<int> ropelength={4,3,2,6};
    int N=2;

    connectNropes(ropelength,N);

    return 0;
}