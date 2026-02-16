/*Kth Level of a  Tree 
--------------  by Level order Traversal  -----------*/
#include<bits/stdc++.h>
#include<queue>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        this->data=val;
        left=right=NULL;
    }
};
static int i=-1;
Node* bt(vector<int> nodes){
    i++;
    if(nodes[i]==-1){
        return NULL;
    }
    Node* newNode=new Node(nodes[i]);
    newNode->left=bt(nodes);
    newNode->right=bt(nodes);

    return newNode;//root node of tree
}
void kthlevel(Node* root,int k){
    queue<Node*> q;
    if(root == NULL){
        return;
    }
    q.push(root);
    q.push(NULL);
    int Level=1; 
    
    while(!q.empty()){
        Node* currNode=q.front();
        q.pop();
        if(currNode==NULL){
            Level++;
            if(q.empty()){
                break;;
            }
            q.push(NULL);
        }else{
            if(Level==k){
                cout<<currNode->data<<" ";
            }
        
            if(currNode->left != NULL){
                q.push(currNode->left);
            }
        
            if(currNode->right != NULL){
                q.push(currNode->right);
            }
        }
        
    }
}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=bt(nodes);
    int k=3;
    kthlevel(root,k);
}