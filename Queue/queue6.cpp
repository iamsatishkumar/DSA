/*stack using 2 Queue*/
#include<iostream>
#include<queue>
using namespace std;
class Stack {
    queue<int> q1;
    queue<int> q2;
public:
    void push(int data){
        //shifting q1 to q2
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        //adding in q1
        q1.push(data);
        //shiftin q2 to q1
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    int top(){
        if(q1.empty()){
            return -1;
        } else {
            return q1.front();
        }
    }
    void pop(){
        if(q1.empty()){
            return;
        } else {
            q1.pop();
        }
    }
    bool empty(){
        return q1.empty();
    }
};
int main() {
    Stack s;
    s.push(1);s.push(2);s.push(3);s.push(4);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();

    }
    return 0;
}