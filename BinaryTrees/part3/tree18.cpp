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
//to find lca
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
int dist(Node* root,int n){
    if(root==NULL){
        return -1;
    }

    if(root->data==n){
        return 0;//distance from itself
    }

    int leftDist=dist(root->left,n);
    if(leftDist != -1){
        return leftDist+1;
    }

    int rightDist=dist(root->right,n);
        if(rightDist != -1){
            return rightDist+1;
        }
    

    return -1;
}
int minDist(Node* root,int n1,int n2){
    Node* lca=LCA2(root,n1,n2);

    int dist1=dist(lca,n1);
    int dist2=dist(lca,n2);

    return dist1+dist2;
}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=bt(nodes);
    
    int n1=4, n2=6;
    cout<<minDist(root,n1,n2)<<endl;
    return 0;
}