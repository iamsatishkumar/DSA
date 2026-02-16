//Implementation of stack
#include<bits/stdc++.h>
#include<vector>
using namespace std;
//Create stack using vector
class Stack {
    vector<int> vec;
public:
    void push(int val) {
        vec.push_back(val);
    }
    void pop( ) {//Time complexity : O(1)
        if(isEmpty()) {
            cout<<"stack is Empty\n";
            return;
        }
        vec.pop_back();
    }
    int Top() {//O(1)
        if(isEmpty()) {
            cout<<"stack is Empty\n";
            return -1;
        }
        int lastIdx=vec.size()-1;
        return vec[lastIdx];
    }
    bool isEmpty() {
        return vec.size()==0;
    }
};
int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while(!s.isEmpty()) {
        cout<<s.Top()<<" ";
        s.pop();
    }
    return 0;
}

