// Add elements in linked list( push_front, push_back )
#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
    
};
class List {
    Node* head;
    Node* tail;

public :
    List(){
        head=NULL;
        tail=NULL;
    }

    void push_front(int val){
        Node* newNode=new Node(val); //dynamic

        if(head == NULL){
            head=tail=newNode;
        } else {
            newNode->next = head; //newNode.next
            head=newNode; 
        }
    }

    void push_back(int val){
        Node* newNode=new Node(val);
        if(head == NULL){
            head=tail=NULL;
        } else {
            tail->next=newNode;
            tail=newNode; 
        }
    }

    void printList() {
        Node* temp=head;
        while(temp != NULL){
            cout<<temp->data<<"->";//*(temp).data==temp->data
            temp=temp->next;
        }
    }
};
int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);//1->2->3->4->Null
    ll.printList();
    return 0;
}