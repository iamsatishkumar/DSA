// Iterative search in ll
#include<iostream>
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
        if(newNode==NULL) {
            head=tail=newNode;
        } else {
            newNode->next=head;
            head=newNode;
        }
    }
    void printList() {
        Node* temp=head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
    int search(int target) {
        Node* temp=head;
        int idx=0;
        while(head != NULL) {
            if(temp->data == target){
                cout<<"Data is at idx : ";
                return idx;
            } else {
                temp=temp->next;
                idx++;
            }
        }
        return -1;
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

    cout<<obj.search(3);
    return 0;



}

