/*circular queue using array
without using class*/ 
#include<iostream>
using namespace std;
#define size 10
int arr[size];
int front=-1,rear=-1;
bool isFull() {
    return ((rear+1)%size == front);
}
bool isEmpty() {
    return front==-1;
}
void push(int val) {//enqueue
    if(isFull()) {
        cout<<"overflow\n";
        return;
    }
    if(isEmpty()) {
/*pop front should not be pointing to -1,
if we do pop when array has single element at that time
front will be -1 that's why front=rear=0 */
        front=rear=0;
    } else {
        rear=(rear+1)%size;
    }
    arr[rear]=val;
}
void pop() {
    if(isEmpty()) {
        cout<<"q is empty(underflow)";
        return;
    }
    if(front==rear) {//if only single element
        front=rear=-1;
    } else {
        front=(front+1)%size;
    }
}
int printFront() {
    if(isEmpty()){
        cout<<"underflow\n";
        return -1;
    }
        return arr[front];
    }

int main () {
    push(1);push(2);push(3);
    while(!isEmpty()) {
        cout<<printFront()<<" ";
        pop();
    }
    return 0;
    
    
}


