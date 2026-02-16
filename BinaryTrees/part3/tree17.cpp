/*Lowest Common Ancestor
-------------  Approach 2  --------------               */
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
Node* LCA2(Node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }

    if(root->data == n1 || root->data == n2){
        return root;
    }

    Node* leftLCA=LCA2(root->left, n1, n2);
    Node* rightLCA=LCA2(root->right, n1, n2);

    if(leftLCA != NULL && rightLCA != NULL){
        return root;
    }

    return leftLCA == NULL ? rightLCA : leftLCA;
    
}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=bt(nodes);
    
    int n1=4, n2=3; //lca=1
    cout<<LCA2(root,n1,n2)->data;
    return 0;
}