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
class List {
public:
    Node* head;
    Node* tail;

    List() {
        head=NULL;
        tail=NULL;

    }
    void push_front(int val) {
        Node* newNode=new Node(val);
        if(head==NULL) {
            head=tail=newNode;
        } else {
            newNode->next=head;
            head=newNode;
        }
    }

void pop_front( ) {
    Node* temp=head;
    if(temp!=NULL){
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
}
};
void print(Node* head) {
    Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    List l;
    l.push_front(4);
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);
    l.push_front(0);
    print(l.head);
    l.pop_front();
    print(l.head);
    return 0;
}