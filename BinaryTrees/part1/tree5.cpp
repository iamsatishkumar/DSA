/*Height of a tree
Max Distance from Root to Leaf
----------------  BY LEVEL ORDER TRAVERSAL METHOD  -------------- */
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
    int height=0;

    if(root==NULL){//if this codition satisfies that mean's no tree
        return height;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* currNode=q.front();
        q.pop();
        if(currNode==NULL){
            height++;
            if(q.empty()){
                break;
            }
            q.push(NULL);    
        }else{
            if(currNode->left != NULL){
                q.push(currNode->left);
            }
            if(currNode->right != NULL){
                q.push(currNode->right);
            }
        }
    }
    return height;
}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};
    Node* root=buildTree(nodes);
    cout<<"root : "<<root->data<<endl;
    cout<<"height of tree : "<<treeHeight(root)<<endl;
    return 0;
}