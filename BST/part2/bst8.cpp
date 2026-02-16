/*Convert BST to Balanced BST
1st-inorder traversal and push elements in vector which will be a sorted vector then
2nd-create balanced BST from sorted vector */
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
Node* balancedBSTfromSortedVector(vector<int> nodes,int st,int end){
    if(st>end){
        return NULL;
    }
    int mid=st+(end-st)/2;
    Node* currNode=new Node(nodes[mid]);

    currNode->left=balancedBSTfromSortedVector(nodes,st,mid-1);
    currNode->right=balancedBSTfromSortedVector(nodes,mid+1,end);
    return currNode;
}
void getInorder(Node* root,vector<int> &nodes){
    if(root==NULL){
        return;
    }
    getInorder(root->left,nodes);
    nodes.push_back(root->data);
    getInorder(root->right,nodes);
}
Node* balancedBST(Node* root){
    vector<int> nodes;
    getInorder(root,nodes);
    return balancedBSTfromSortedVector(nodes,0,nodes.size()-1);
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
    Node* root=new Node(6);
    root->left=new Node(5);
    root->left->left=new Node(4);
    root->left->left->left=new Node(3);

    root->right=new Node(7);
    root->right->right=new Node(8);
    root->right->right->right=new Node(9);

    root=balancedBST(root);//updated root
    preorder(root);
    cout<<endl;

}