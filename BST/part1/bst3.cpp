/*Delete a Node in bst
cases : 1st-leaf node(no children)
        2nd-1 child
        3rd-2 children*/
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
//inorder traversal
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node* getinorderSuccessor(Node* root){
    while(root->left != NULL){
        root=root->left;
    }
    return root;//is(inorder successor)
}
Node* delNode(Node* root,int val){
    if(root==NULL){
        return NULL;
    }
    if(root->data > val){//left subtree
        del(root->left,val);
    }else if(root->data < val){//right subtree
        del(root->right,val);
    }else{
        //root == val
        //we reach to the node which has to delete
        //case1 : leaf node
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        //case2 : 1 child 
        if (root->left == NULL || root->right == NULL){
            return root->left=NULL ? root->right : root->left;
            //if left == NULL return right child node or left != NULL return left child
        }

        //case2 : 2 children
        Node* is = getinorderSuccessor(root->right);
        root->data=is->data;//assigning is(inorder successor) to node which we have to delete which is pointed by root

    }

}
int main(){
    int arr[]={8,10,11,14,5,6,3,1,4};
    Node* root=buildBST(arr,9);
    inorder(root);
}
