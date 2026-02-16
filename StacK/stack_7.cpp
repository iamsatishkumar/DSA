//push an element at bottom of stack
#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
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
    void push(int val) {
        Node* newNode=new Node(val);
        if(head==NULL) {
            head=newNode;
        } else {
            newNode->next=head;
            head=newNode;
        }
    }
    int top() {
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
    void push_bottom(int val) {
        Node* bottomNode=new Node(val);
        if(isEmpty()) {
            head=bottomNode;
        }
        Node* temp=head;
        while(temp->next!=NULL) {
            temp=temp->next;
        }
        temp->next=bottomNode;
    }
    bool isEmpty() {
        return head==NULL;
    }
};
int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push_bottom(0);
    while(!s.isEmpty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
