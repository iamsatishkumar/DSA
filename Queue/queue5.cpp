/*Queue using 2 stacks
push-->O(n)  pop,front-->O(1)*/
/*Algorithm: 1st- shift s1 to s2
             2nd- push element in s1
             3rd- shift s2 to s1   */
#include<iostream>
#include<stack>
using namespace std;
class Queue {
    stack<int> s1;
    stack<int> s2;
public:

    void push(int val) {
        //shifting s1 to s2
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        //new element push in s1
        s1.push(val);

        //shifting s2 to s1
        while(!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }   
    
    }
    int front() {
        if(s1.empty()) {
            return -1;
        } else {
            return s1.top();
        }
    }
    void pop() {
        if(s1.empty()) {
            return;
        } else {
            s1.pop();

        }
    }
    bool empty() {
        return s1.empty();
    }

};
int main() {
    Queue q;

    q.push(1);q.push(2);q.push(3);q.push(4);

    while(!q.empty()) {
        cout<<q.front();
        q.pop();
    }
return 0;
}