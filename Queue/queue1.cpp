/*Queue usin linked list*/
#include<iostream>
using namespace std;
class Node {
public:
    Node* next;int data;
    Node(int val) {
        data=val;next=NULL;
    }
};
class Queue {
public:
    Node* head;Node* tail;
    Queue() {
        head=NULL;tail=NULL;
    }
    void push(int val) {//adding elment in queue
        Node* newNode=new Node(val);
        if(head==NULL) {
            head=tail=newNode;
        } else {
            tail->next=newNode;
            tail=newNode;
        }
    }
    void pop() {
        if(empty()) {
            cout<<"q is empty (underflow)";
        } else {
            Node* temp=head;
            head=head->next;
            delete temp;
        }
    }
    int front() {
        if(empty()) {
            return -1;
        } else {
            return head->data;
        }
    }
    bool empty( ) {
        return head==NULL;
    }

};
int main() {
    Queue q;
    q.push(1);q.push(2);q.push(3);q.push(4);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}