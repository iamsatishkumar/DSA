/*Kth Level of a  Tree 
--------------  by Reccursion  -----------*/
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
void kthHelper(Node* root,int k,int currLevel){
    if(root == NULL){
        return;
    }
    if(currLevel==k){
        cout<<root->data<<" ";
    }
    kthHelper(root->left, k, currLevel+1);
    kthHelper(root->right, k, currLevel+1);

}
void kthlevel(Node* root,int k){
    kthHelper(root,k,1);
    cout<<endl;
}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=bt(nodes);
    int k=3;
    kthlevel(root,k);
    return 0;
}