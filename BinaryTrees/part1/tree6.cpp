/*Height of a tree
Max Distance from Root to Leaf
----------------  BY RECURSION  -------------- */
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

    if(nodes[idx]==-1){
        return NULL;
    }

    Node* currNode=new Node(nodes[idx]);
    currNode->left=buildTree(nodes);
    currNode->right=buildTree(nodes);

    return currNode;//returning root of the tree

}
int treeHeight(Node* root){
    if(root == NULL){
        return 0;
    }

    int LeftHt=treeHeight(root->left);
    int RightHt=treeHeight(root->right);

    int currHeight=max(LeftHt,RightHt) + 1;

    return currHeight;
}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};
    Node* root=buildTree(nodes);
    cout<<"root : "<<root->data<<endl;
    cout<<"height of tree : "<<treeHeight(root)<<endl;
    return 0;
}