#include<bits/stdc++.h>
using namespace std;
class Node {
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
    }
    if(root->data > val){
        root->left=insert(root->left,val);
    }
    
}
void bst(int arr[],int n){
    Node* root=NULL;
    for(int i=0; i<n; i++){
        root=insert(root,arr[i]);
    }


}
