// Recursive Search in ll
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
    Node* head;
    Node* tail;
public:
    List() {
        head=NULL;
        tail=NULL;
    }

    void push_front(int val) {
        Node* newNode=new Node(val);
        if(head == NULL) {
            head=tail=newNode;
        } else {
            newNode->next=head;
            head=newNode;
        }
    }
    void push_back(int val) {
        Node* newNode= new Node(val);
        if(head == NULL) {
            head=tail=newNode;
        } else {
            tail->next=newNode;
            tail=newNode;
        }
    }

    void printList() {
        Node* temp=head;
        while(temp != NULL) {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
    
    
    int helper(Node* h, int key) { // temp=h
        if(h == NULL) {
            return -1;
        }

        if(h->data == key) {
            return 0;
        }

        int idx=helper(h->next, key);
        if(idx == -1) {
            return -1;
        }

        return idx + 1;
    }

    int searchRec(int key) {    
        return helper(head, key);
    }
};
int main() {
    List obj;
    obj.push_front(5);
    obj.push_front(4);
    obj.push_front(3);
    obj.push_front(2);
    obj.push_front(1);
    obj.printList();

    cout<<obj.searchRec(4)<<endl;
    return 0;
}