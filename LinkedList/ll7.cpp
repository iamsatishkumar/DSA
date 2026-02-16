//reversing a linked list
#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node*next;

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
    void push_back(int val) {
        Node* newNode=new Node(val);
        if(head==NULL)  {
            head=tail=newNode;
        } else {
            tail->next=newNode;
            tail=newNode;
        }
    }
    void reverseLL() {
        Node* curr=head;
        Node* prev=NULL;
        while(curr!=NULL) {
            Node* Next=curr->next;
            curr->next=prev;
            //updation for next iteration
            prev=curr;
            curr=Next;
        }
        head=prev;//update head after reveRsing
    }
};
void printLL(Node* head) {
    Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
    
}
int main() {
    List LL;
    LL.push_front(5);
    LL.push_front(4);
    LL.push_front(3);
    LL.push_front(2);
    LL.push_front(1);
    LL.push_front(0);
    printLL(LL.head);
    
    LL.reverseLL( );
    printLL(LL.head);
    return 0;
}