/*insert & Build a BST*/
#include<iostream>
#include<vector>
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
Node* insert(Node* root,int val){//O(logn)
    if(root==NULL){
        root=new Node(val);
        return root;
    }

    if(root->data > val){//left subtree
        root->left=insert(root->left,val);
    }else{//right subtree
        root->right=insert(root->right,val);
    }
    return root;

}

Node* buildBST(int arr[],int n){
    Node* root=NULL;

    for(int i=0; i<n; i++){
        root=insert(root,arr[i]);
    }

    return root;

}

void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main(){
    int arr[6]={5,1,3,4,2,7};
    Node* root=buildBST(arr,6);
    inOrder(root);
    return 0;
}