/*stack using Deque*/
#include<iostream>
#include<deque>
using namespace std;
class Stack{
    deque<int> dq;
public:
    void push(int data){
        dq.push_back(data);
        //dq.push_front();
    }
    int top(){
        if(dq.empty()){
            return -1;
        }
        return dq.back();
        //return dq.front();    
    }
    void pop(){
        if(dq.empty()){
            cout<<"underflow";
            return;
        }else{
            dq.pop_back();
            //dq.pop_front();
        }
    }
    bool empty(){
        return dq.empty();
    }
};
int main(){
Stack s;
s.push(1);s.push(2);s.push(3);s.push(4);

    while(!s.empty()) {
        cout<<s.top();
        s.pop();
    }
    return 0;
}