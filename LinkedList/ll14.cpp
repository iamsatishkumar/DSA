//Zig-Zag Linked List
//Brute force method(self made)
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
};
void print(Node* head) {
    Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}
Node* splitATMid(Node* head) {
    Node* slow=head;
    Node* fast=head;
    Node* prev=NULL;

    while(fast!=NULL && fast->next!=NULL) {
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    if(prev!=NULL){
        prev->next=NULL;//split at middle
    }
    return slow;//right half head
}

//reversing the 2nd half of ll
Node* reversell(Node* rightHead) {
    Node* prev=NULL;
    Node* curr=rightHead;
    while(curr!=NULL) {
        Node* Next=curr->next;
        curr->next=prev;
        //updation for next iteration
        prev=curr;
        curr=Next;
    }
    return prev;//head of reversed ll

}
Node* zigZag(Node* head) {
    Node* rightHead=splitATMid(head);//return head of 2nd half
    Node*rightHeadrev=reversell(rightHead);

    //Alternate merging 
    Node* left=head;
    Node* right=rightHeadrev;
    Node* tail=NULL;//for odd size of ll(left side becomes NULL)
    //in even both side become NULL at same time

    while(left!=NULL && right!=NULL) {
        Node* nextLeft=left->next;//address of next node of left ll
        Node* nextRight=right->next;//address of next node of right ll
        

        left->next=right;//connecting(1st node of 1st ll to 1st node of second ll)
        right->next=nextLeft;//connectin(1st node of 2nd ll to 2nd node of 1st ll) 

        tail=right;

        left=nextLeft;//1st ll updation
        right=nextRight;//2nd ll updation
    }
    if(right!=NULL) {
        tail->next=right;
    }
    return head;

}

int main() {
    List LL;
    LL.push_front(5);
    LL.push_front(4);
    LL.push_front(3);
    LL.push_front(2);
    LL.push_front(1);
    LL.push_front(0);
    print(LL.head);
    //0->1->2->3->4->5->NULL

    LL.head=zigZag(LL.head);
    print(LL.head);
    //0->5->1->4->2->3->NULL
    return 0;
}