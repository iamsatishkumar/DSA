//Reverse a string using stack
#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    char data; Node* next;
    Node(char val) {
        data=val;
        next=NULL;
    }
};
class Stack {
    Node* head;
public:
    Stack() {
        head=NULL;
    }
    void push(char val) {
        Node* newNode=new Node(val);
        if(head==NULL) {
            head=newNode;
        } else {
            newNode->next=head;
            head=newNode;
        }
    }
    char top() {
        if(isEmpty()) {
            return -1;
        }
        return head->data;
    }
    void pop() {
        if(isEmpty()) {
            return;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    bool isEmpty() {
        return head==NULL;
    }
};
int main() {
    Stack s;
    s.push('s');
    s.push('a');
    s.push('t');
    s.push('i');
    s.push('s');
    s.push('h');
    while(!s.isEmpty()) {
        cout<<s.top();
        s.pop();
    }
    return 0;
}