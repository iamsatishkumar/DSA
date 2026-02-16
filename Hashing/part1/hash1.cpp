/*Building hash toable*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Node {
public:
    string key;
    int val;
    Node* next;

    Node(string key,int val){
        this->key=key;
        this->val=val;
        next=NULL;
    }
    //Destructor 
    ~Node() {
        if(next!=NULL){
            delete next;
        }
    }
};
class HashTable {
    int totSize;
    int currSize;
    Node** table;

    int HashFunction(string key){
        int idx=0;

        for(int i=0; i<key.size(); i++){
            idx = idx + (key[i] * key[i]) % totSize;
        }
        return idx%totSize;
    }

    void Rehash(){//O(n)
        //storing old table to copy in new table
        Node** oldTable=table;
        int oldSize=totSize;
        //new table
        totSize=2*totSize;
        currSize=0;
        table=new Node*[totSize];

        //initalizing new table with NULL
        for(int i=0; i<totSize; i++){
            table[i]=NULL;
        }

        //copying element in new table from old;
        for (int i=0; i<oldSize; i++){
            Node* temp=oldTable[i];
            while(temp != NULL){
                insert(temp->key,temp->val);
                temp=temp->next;
            }
            //Now deleting old table
            if(oldTable[i] != NULL){
                delete oldTable[i];
            }
        }
        delete[] oldTable;
        

    }
public:
    HashTable(int size){
        totSize=size;
        currSize=0;

        table = new Node*[totSize];

        //initilizing table with NULL
        for(int i=0; i<totSize; i++){
            table[i]=NULL;
        }
    
    }

    void insert(string key,int val){//O(1) - Avg , O(n) - when rehashing happens (rehashing not happen in most of the case)
        int idx = HashFunction(key);

        Node* newNode=new Node(key,val);

        newNode->next=table[idx];
        table[idx]=newNode;

        currSize++;

        double lambda = currSize/(double)totSize;

        if(lambda > 1){
            Rehash();
        }
    }

    bool exists(string key){
        int idx=HashFunction(key);

        Node* temp=table[idx];
        while(temp != NULL){
            if(temp->key == key){//Found
                return true;
            }
            temp=temp->next;
        }
        return false;

    }

    int search(string key){
        int idx=HashFunction(key);

        Node* temp=table[idx];
        while(temp != NULL){
            if(temp->key == key){
                return temp->val;
            }
            temp=temp->next;
        }
        return -1;

    }

    void erase(string key){
        int idx=HashFunction(key);

        Node* temp=table[idx];
        Node* prev=NULL;
        while(temp != NULL){//erase
            if(temp->key == key){
                if(prev == NULL){//head
                    table[idx]=temp->next;
                }else{
                prev->next=temp->next;
                }
            delete temp;
            return;
            
            }

            prev=temp;
            temp=temp->next;
        }

    }

    void print(){
        Node* temp;
        for(int i=0; i<totSize; i++){
            cout<<"idx :"<<i;
            temp=table[i];
            while(temp != NULL){
                cout<<"("<<temp->key<<","<<temp->val<<") , ";
                temp=temp->next;
            }
            cout<<endl;
        }
    }

    

};
int main(){
    HashTable ht(6);
    ht.insert("India",150);
    ht.insert("china",140);
    ht.insert("us",40);
    ht.insert("uk",20);

    if(ht.exists("India")){
        cout<<"India population : "<<ht.search("India")<<endl;   
    }
    ht.print();
    ht.erase("china");
    cout<<"---------- after removing ---------\n";
    ht.print();
   

    return 0;
}