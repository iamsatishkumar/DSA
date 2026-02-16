// stack implementation using vector with class template    
#include<bits/stdc++.h>
#include<vector>
using namespace std;
template<class T>//
class Stack {
    vector<T> vec;
public:
    void push(T val) {
        vec.push_back(val);
    }
    void pop() {
        if(isEmpty()){
            return;
        }
        vec.pop_back();
    }
    int Top() {
        if(isEmpty()) {
            return -1;
        }
        
            return vec[vec.size()-1];
    }
    bool isEmpty() {
        return vec.size()==0;
    }
};
int main() {
    Stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    while(!s1.isEmpty()) {
        cout<<s1.Top()<<" ";
        s1.pop();
    }
    cout<<endl;
    return 0;
}