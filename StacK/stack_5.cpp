//Implementation of stack without using stl of Linked list
#include<bits/stdc++.h>
#include<stack>
using namespace std;
template<class T>
class Node {
public:
    T data;
    Node* next;

    Node(T val) {
        data=val;
        next=NULL;
    }
};
template<class T>
class Stack {
    Node<T>* head;
public:
    Stack() {
        head=NULL;
    }
    void push(T val) {
        //push-front
        Node<T>* newNode=new Node<T>(val);
        if(head==NULL) {
            head=newNode;
        } else {
            newNode->next=head;
            head=newNode;
        }
    }
    void pop() {
        //pop-front
        Node<T>* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    T top() {
        return head->data;
    }
    bool isEmpty() {
        return head==NULL;
    }

};
int main() {
    /* when we use stl for stack then we use stack here s is small
    but when we do it wihout stl then we use big S from class name Stack*/
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    while(!s.empty()) {//here we use empty when we use stl
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}