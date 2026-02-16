/*Search in BST*/
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};

Node* insert(Node* root,int val){
    if(root==NULL){
        root=new Node(val);
        return root;
    }

    if(root->data > val){
        root->left=insert(root->left,val);
    }else{
        root->right=insert(root->right,val);
    }
}
Node* buildBST(int arr[],int n){
    Node* root=NULL;
    
    for(int i=0; i<n; i++){
        root=insert(root,arr[i]);
    }
    return root;
}
//printin bst
void levelorder(Node* root){
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* currNode=q.front();
        q.pop();
        cout<<currNode->data<<" ";
        if(currNode->left != NULL){
            q.push(currNode->left);
        }
        if(currNode->right != NULL){
            q.push(currNode->right);
        }
    }
}
//searching node in bst
bool search(Node* root,int val){
    if(root==NULL){
        return false;
    }
    if(root->data == val){
        return true;
    }else if(root->data > val){
        search(root->left,val);
    }else{
        search(root->right,val);
    }
}
int main(){
    int arr[]={1,3,4,5,6,7,8,9};
    Node* root=buildBST(arr,8);
    cout<<"root is : "<<root->data<<endl;
    levelorder(root);
    cout<<endl<<search(root,5);
    return 0;
}
