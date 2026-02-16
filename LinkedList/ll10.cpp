// Removing cycle in a linked list
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
    void push_front(int val) {
        Node* newNode=new Node(val);
        if(head==NULL) {
            head=tail=newNode;
        } else {
            newNode->next=head;
            head=newNode;
        }
    }
    void print(Node* temp) {
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
    void removeCycle(Node* head){
        //detect cycle
        Node* slow=head;
        Node* fast=head;
        bool isCycle=false;


        while(fast != NULL && fast->next != NULL) {
            slow=slow->next;
            fast=fast->next->next;

            if(slow == fast) {
                cout<<"cycle exists\n";
                isCycle=true;
                break;
            }
        }
        if(!isCycle) {
            cout<<"cycle doesn't exist\n";
            return;
        }
        slow=head;
        if(slow==fast) {//special case : tail -> next = head
            while(fast->next != slow) {
                fast=fast->next;
            }
            fast->next=NULL;//remove cycle

        } else {
            Node* prev=fast;
            while(slow != fast) {
                slow=slow->next;
                prev=fast;
                fast=fast->next;

            }
            prev->next=NULL; //remove cycle
        }
    }
};
int main() {
    List obj;
    obj.push_front(5);
    obj.push_front(4);
    obj.push_front(3);
    obj.push_front(2);
    obj.push_front(1);
    //1->2->3->->4->5
    obj.tail->next=obj.head;
    obj.removeCycle(obj.head);
    obj.print(obj.head);
    return 0;
}