/*Sorted array to Balanced BST
*/
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

Node* balancedBST(int arr[],int st,int end){
    if(st > end){
        return NULL;
    }
    
    int mid = st + (end-st)/2;
    Node* currNode=new Node(arr[mid]);
    currNode->left=balancedBST(arr,st,mid-1);
    currNode->right=balancedBST(arr,mid+1,end);

    return currNode;

}
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    int arr[]={3,4,5,6,7,8,9};
    Node* root=balancedBST(arr,0,6);
    preorder(root);
    return 0;
}