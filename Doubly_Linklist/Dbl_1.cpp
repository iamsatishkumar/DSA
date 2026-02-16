//wap to create doubly linked list
//push_front & push_back
#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data=val;
        next=prev=NULL;
    }
};
class DoublyList {
public:
    Node* head;
    Node* tail;

    DoublyList() {
        head=NULL;
        tail=NULL;
    }

    void push_front(int val) {
        Node* newNode=new Node(val);
        if(head==NULL) { 
            head=tail=newNode;
        } else {
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }
    void push_back(int val) {
        Node* newNode=new Node(val);
        if(head==NULL) {
            head=tail=newNode;
        } else {
            newNode->prev=tail;
            tail->next=newNode;
            tail=newNode;
        }
    }
};
void print(Node* head) {
    Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->data<<"<=>";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main() {
    DoublyList dbll;
    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);
    dbll.push_front(0);
    print(dbll.head);
    return 0;
}