/*Validate BST
node > maxValue in left subtree
Node < minValue in right subtree*/
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
    if(root == NULL){
        root=new Node(val);
        return root;
    }
    if(root->data > val){
        root->left=insert(root->left,val);
    }
    if(root->data < val){
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
bool validateHelper(Node* root,Node* min,Node* max){
    if(root == NULL){
        return true;
    }
    if(min != NULL && root->data < min->data){//checking in right subtree
        return false;
    }
    if(max != NULL && root->data > max->data){//checking in left subtree
        return false;
    }
    return validateHelper(root->left,min,root) &&
            validateHelper(root->right,root,max); 

}
bool validateBST(Node* root){
    return validateHelper(root,NULL,NULL);

}
int main(){
    int arr[]={5,3,1,4,6,7};
    Node* root=buildBST(arr,6);

    cout<<validateBST(root)<<endl;
    return 0;
}