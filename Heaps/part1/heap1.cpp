/*priority queue in c++ stl*/
#include<iostream>
#include<queue>
using namespace std;
//by default priority queue gives element of higher priority(descending);
void descending(priority_queue<int> pqMax){
    while(!pqMax.empty()){
        cout<<" ToP :"<<pqMax.top()<<endl;
        pqMax.pop();
    }
} 
//min priority queue
void ascending(priority_queue<int, vector<int>, greater<int>> pqMin){
    while(!pqMin.empty()){
        cout<<" ToP : "<<pqMin.top()<<endl;
        pqMin.pop();
    }
    
}
int main(){
    priority_queue<int> pqMax;
    priority_queue<int, vector<int>, greater<int>> pqMin;

    pqMax.push(5);
    pqMax.push(10);
    pqMax.push(9);
    pqMax.push(7);
    pqMax.push(3);

    pqMin.push(5);
    pqMin.push(10);
    pqMin.push(9);
    pqMin.push(7);
    pqMin.push(3);

    descending(pqMax);
    cout<<"\n --------- min priority --------- \n";
    ascending(pqMin);
    return 0;
}