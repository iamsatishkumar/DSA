/*circular queue using array class*/
#include<iostream>
using namespace std;
class Queue {
    int* arr;

    int capacity;
    int currSize;
    int f,r;
public:
    Queue(int capacity) {
        this->capacity=capacity;
        arr=new int[capacity];
        currSize=0;//it tracks size of array(no of elements)

        f=0;
        r=-1;
    }

    void push(int data) {
        if(currSize==capacity) {
            cout<<"queue is full\n";
            return;
        }
        r=(r+1)%capacity;
        arr[r]=data;
        currSize++;
    }
    void pop() {
        if(empty()) {
            cout<<"queue is empty\n";
            return;
        }
        f=(f+1)%capacity;
        currSize--;
    }
    int front() {
        if(empty()) {
            return -1;
        }
        return arr[f];
    }
    bool empty() {
        return currSize==0;
    }
};
int main() {
    Queue q(4);
    q.push(1);q.push(2);q.push(3);q.push(4);
    
    cout<<q.front()<<" ";
    q.pop();
    cout<<q.front()<<" ";
    q.pop();
    
    return 0;
}