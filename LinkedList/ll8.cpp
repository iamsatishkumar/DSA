//Find & Remove Nth Node from End
#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;Node* next;

    Node(int val) {
        data=val;next=NULL;
    }
};
class linkedList {
    Node* head;Node* tail;
public:
    linkedList() {
        head=NULL;tail=NULL;
    }

    void push_back(int val) {
        Node* newNode=new Node(val);
        if(head == NULL) {
            head=tail=newNode;
        } else {
            tail->next=newNode;
            tail=newNode;
        }

    }

    void printll() {
        Node* temp=head;
        while(temp!=NULL) {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
/*
    void deleteNode(int target) {
        Node* currNode=head;
        Node* prev=NULL;
        while(currNode!=NULL) {
            if(currNode->data == target) {
                Node* NEXT=currNode->next;
                if(prev == NULL){
                    head=currNode->next;
                } else if(currNode == NULL) {
                    tail=prev;
                } else {
                    prev=currNode;
                    currNode=NEXT;
                }
                delete currNode;
                return;
            }
            currNode=currNode->next;
        }
    }
        */

        int countSize() {
            Node* temp=head;
            int size=0;
            while(temp != NULL) {
                size++;
                temp=temp->next;

            }
            return size;
        }
        void removeNth(int n) { //O(N); O(1)
            int NodeSize=countSize();
            Node* prev=head;
            for(int i=1; i<NodeSize-n; i++) {
                prev=prev->next;
            }
            Node* toDel=prev->next;
            cout<<"going to del : "<<toDel->data<<endl;
            prev->next=prev->next->next;
            
        }
}; 
int main() {
    linkedList obj;
    obj.push_back(1);
    obj.push_back(2);
    obj.push_back(3);
    obj.push_back(4);
    obj.push_back(5);
    obj.push_back(6);
    obj.printll();
    cout<<obj.countSize()<<endl;
    obj.removeNth(2);
    obj.printll();
    return 0;
}