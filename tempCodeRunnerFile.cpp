

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
    void push_back(int val) {
        Node* newNode= new Node(val);
        if(newNode==NULL) {
            head=tail=newNode;
        } else {
            tail->next=newNode;
            tail=newNode;
        }
    }

    void printList() {
        Node* temp=head;
        while(head!=NULL) {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
    
    /*