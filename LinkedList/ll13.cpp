//merge sort on a ll
#include<bits/stdc++.h>
#include<list>
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
    List( ) {
        head=NULL;
        tail=NULL;
    }
    void push_front(int val) {
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        } else {
            newNode->next=head;
            head=newNode;
        }
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
    void printLL( ) {
        Node* temp=head;
        while(temp!=NULL) {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;

    }

};
//function to split ll in two halves
Node* splitATmid(Node* head) {
    Node* slow=head;
    Node* fast=head;
    Node* prev=NULL;

    while(fast!=NULL && fast->next!=NULL) {
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    if(prev != NULL) {
        prev->next=NULL; //split at middle
    }
    return slow; //right half Head
        
}
//merging two sorted ll
Node* merge(Node* left, Node* right) {
    List ans;
    Node* i=left; //1st ll
    Node* j=right; //2nd ll

    while(i!=NULL && j!=NULL) {
        if(i->data <= j->data) {
            ans.push_back(i->data);
            i=i->next;
        } else {
            ans.push_back(j->data);
            j=j->next;
    
        }
    }
    while(i!=NULL) {
        ans.push_back(i->data);
        i=i->next;
    }
    while(j!=NULL) {
        ans.push_back(j->data);
        j=j->next;
    }
    return ans.head;
}
//recursive merge sort
Node* mergeSort(Node* head) {
    if( head == NULL || head->next==NULL) {
        return head;
    }
    Node* rightHead=splitATmid(head);

    Node* leftSortedHead=mergeSort(head); //Left Head
    Node* rightSortedHead=mergeSort(rightHead); //Right Head

    return merge(leftSortedHead,rightSortedHead);
}

int main() {
    List ll;
    ll.push_back(1);
    ll.push_front(4);
    ll.push_front(5);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(0);
    ll.printLL();

    ll.head=mergeSort(ll.head);
    ll.printLL();
    return 0;

}
