//push at bottom of stack
#include <bits/stdc++.h>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Stack class
class Stack {
    Node* head;

    // helper function for recursion
    void insertAtBottomHelper(int val) {
        if (isEmpty()) {
            push(val);
            return;
        }
        int temp = top();
        pop();
        insertAtBottomHelper(val);
        push(temp);
    }

public:
    Stack() {
        head = NULL;
    }

    // Push element at top
    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Pop element from top
    void pop() {
        if (head == NULL) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Get top element
    int top() {
        if (head == NULL) {
            throw runtime_error("Stack is empty");
        }
        return head->data;
    }

    // Check empty
    bool isEmpty() {
        return head == NULL;
    }

    // Push at bottom (recursive)
    void pushAtBottom(int val) {
        insertAtBottomHelper(val);
    }

    // Print stack
    void printStack() {
        Node* temp = head;
        cout << "Stack (top to bottom): ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Driver code
int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Original:\n";
    st.printStack();   // 30 20 10

    st.pushAtBottom(5);

    cout << "After pushing 5 at bottom:\n";
    st.printStack();   // 30 20 10 5

    return 0;
}
