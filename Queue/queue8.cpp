/*Interleave 2 Queues
interleave 3 halves of a queue of even size
*/
#include<iostream>
#include<queue>
using namespace std;
void interleave(queue<int>& q){
    int n=q.size();
    queue<int> copyq;
    int i=0;
    while(i<n/2){
        copyq.push(q.front());
        q.pop();
        i++;
    }
    /*Here copyq={1,2,3,4,5} & q={6,7,8,9,10}*/
    while(!copyq.empty()){
        q.push(copyq.front());
        copyq.pop();
        q.push(q.front());
        q.pop();
    }
                            
}
int main(){
    queue<int> q;
    for(int i=1; i<=10; i++){
        q.push(i);
    }
    interleave(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}