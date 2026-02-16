/*Transform to sum tree*/
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
void levelorder(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* currNode=q.front();
        q.pop();
        cout<<currNode->data<<" ";
        if(currNode->left != NULL){
            q.push(currNode->left);
        }
        if(currNode->right != NULL){
            q.push(currNode->right);
        }
    }
    

}
int transform(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftOld=transform(root->left);
    int rightOld=transform(root->right);
    int currOld=root->data;

    root->data= leftOld + rightOld;

    if(root->left != NULL){
        root->data += root->left->data;
    }

    if(root->right != NULL){
        root->data += root->right->data;
    }
    return currOld;
}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=bt(nodes);
    
    transform(root);
    levelorder(root);
    return 0;
}