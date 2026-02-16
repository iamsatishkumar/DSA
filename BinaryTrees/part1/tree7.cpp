/*COUNT OF NODES */
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

static int idx=-1;
Node* buildTree(vector<int> nodes){
    idx++;
    if( nodes[idx] == -1 ){
        return NULL;
    }

    Node* newNode=new Node(nodes[idx]);
    newNode->left=buildTree(nodes);
    newNode->right=buildTree(nodes);

    return newNode;

}

int countNodes(Node* root){
    if(root == NULL){
        return 0;
    }

    int LeftCount=countNodes(root->left);
    int RightCount=countNodes(root->right);

    int count = (LeftCount + RightCount) + 1;

    return count;

}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildTree(nodes);
    cout<<"root : "<<root->data<<endl;

    cout<<"no. of nodes : "<<countNodes(root);

    return 0;
}