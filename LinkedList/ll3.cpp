// Insert in ll middle
#include<iostream>
using namespace std;
class Node {
    int data;
    Node* next;

    Node(int val) {
        data=val;
        next=NULL;
    }
    friend class List;
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

        if(newNode==NULL){
            head=tail=newNode;
        } else {
            newNode->next=head;
            head=newNode;
        }
    }

    void printList(){
        Node* temp=head;

        while(temp != NULL) {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }

    void insert(int val, int pos){
        Node* newNode=new Node(val);

        Node* temp=head;
        for(int i=0; i<pos-1; i++) {
            if(temp == NULL) {
                cout<<"position is invalid\n";
                return;
            }
            temp=temp->next;

        }
        newNode->next=temp->next;
        temp->next=newNode;
        
    }
};

int main() {
    List num;
    num.push_front(0);
    num.push_front(21);
    num.printList();

    num.insert(11,0);
    num.printList();
    return 0;

}