/* priority queue (PQ) for Pairs
for max/min Heap we create a struct & inside it we use operator overloading*/
#include<iostream>
#include<string>
#include<queue>
using namespace std;
struct ComparePair {
    bool operator () (pair<string, int> &p1, pair<string, int> &p2){
        return p1.second > p2.second;
    }
};
int main(){
    priority_queue<pair<string, int>, vector<pair<string, int>>, ComparePair>  pq;

    pq.push(make_pair("aman", 85));
    pq.push(make_pair("bhumika", 95));
    pq.push(make_pair("chetan", 65));


    while(!pq.empty()){
        cout<<"top = "<<pq.top().first<<", "<<pq.top().second<<endl;
        pq.pop();
    }
    return 0;
}