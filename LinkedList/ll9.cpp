// Detect a cycle /Loop in a linked list
#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data; Node* next;

    Node(int val) {
        data=val; next=NULL;
    }
};
class List {
public:
    Node* head; Node* tail;

    List() {
        head=NULL; tail=NULL;
    }

    void push_back(int val) {
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        } else {
            tail->next=newNode;
            tail=newNode;
        }
    }
    void print() {
        Node* temp=head;
        while(temp!=NULL) {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
    bool isCyclicLL(Node* head) {
        Node* slow=head;
        Node* fast=head;
        while(fast != NULL && fast->next != NULL){
            slow=slow->next;//+1
            fast=fast->next->next;//+2

            if(fast==slow) {
                cout<<"cycle exists\n";
                return true;
            }
        }
        cout<<"cycle doesn't exists\n";
        return false;
    }
    
};
int main() {
    List obj;
    obj.push_back(1);
    obj.push_back(2);
    obj.push_back(3);
    obj.push_back(4);
    obj.push_back(5);
    obj.push_back(6);
    obj.print();

    obj.tail->next=obj.head;
    obj.isCyclicLL(obj.head);
    return 0;
}
