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
//here we are calculating distance of currNode to it's kth node & with it we are calculating ancestor
int kthAnces(Node* root,int node,int k){//O(n)
    if(root == NULL){
        return -1;
    }

    if(root->data == node){//node whose ancestor is to find
        return 0;//distance from itself
    }

    int leftDist=kthAnces(root->left,node,k);
    int rightDist=kthAnces(root->right,node,k);

    if(leftDist == -1 && rightDist == -1){
        return -1;
    }

    int validVal = leftDist == -1 ? rightDist : leftDist;

    if(validVal + 1 == k){
        cout<<"kth Ancestor : "<<root->data<<endl;
    }
    return validVal+1;
}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=bt(nodes);
    
    int node=4, k=2;
    kthAnces(root,node,k);
    
    return 0;
}