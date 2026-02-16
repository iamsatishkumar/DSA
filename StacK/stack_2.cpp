//Implementation of stack using array
#include<bits/stdc++.h>
using namespace std;
class Stack {
public:
    
    int arr[5];
    int st=-1;

    void push(int val) {
        if(st>=4) {
            return;
        }
        st=st+1;
        arr[st]=val;
    }
    int top( ) {
        if(isEmpty()) {
            return -1;
        }
        return arr[st];
    }
    void pop() {
        if(isEmpty()) {
            return;
        }
        st=st-1;
    }
    bool isEmpty() {
        return st==-1;
    }
};
int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while(!s.isEmpty()) {
        cout<<s.top()<<",";
        s.pop();
    }
    return 0;

}
