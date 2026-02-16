//pop_front in Doubly Linked list
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
    void print() {
        Node* temp=head;
        while(temp!=NULL) {
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void pop_front() {
        Node* temp=head;//store head
        head=head->next;//move tail
        if(head!=NULL){
            head->prev=NULL;
        }
        temp->next=NULL;
        delete temp;
    }
    void pop_back() {
        if(tail==NULL){//empty list
            return;
        }
        Node* temp=tail;//store tail
        tail=tail->prev;//move tail back
        if(tail!=NULL) {
            tail->next=NULL;//deatach old tail
        }
        temp->prev=NULL;
        delete temp;
    }
};
int main() {
    DoublyList L;
    L.push_front(5);
    L.push_front(4);
    L.push_front(3);
    L.push_front(2);
    L.push_front(1);
    L.push_front(0);
    L.print();//0<=>1<=>2<=>3<=>4<=>5<=>NULL
    L.pop_front();
    L.print();//1<=>2<=>3<=>4<=>5<=>NULL
    L.pop_back();
    L.print();//1<=>2<=>3<=>4<=>NULL
    return 0;
}