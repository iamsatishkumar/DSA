
    Node* prev;

    Node(int val) {
        data=val;
        next=prev=NULL;
    }
};
class DoublyList {
public:
    Node* head;
    Node* tail;

    DoublyList() {
        head=NULL;
        tail=NULL;
    }

    void push_front(int val) {
        Node* newNode=new Node(val);
        if(head==NULL) { 
            head=tail=newNode;
        } else {
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }
};
void print(Node* head) {
    Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->data<<"<=>";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main() {
    DoublyList dbll;