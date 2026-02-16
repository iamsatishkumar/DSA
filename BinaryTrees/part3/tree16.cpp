/*Lowest Common Ancestor
-------------  Approach 1  --------------
t.c=O(n)    s.c=O(n)                    */
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
bool rootToNodePath(Node* root,int n, vector<int> &path){//pass by reference so that it can reflect changes
    if(root==NULL){
        return false;
    }

    path.push_back(root->data);
    if(root->data == n){
        return true;
    }

    int isLeft=rootToNodePath(root->left, n, path);
    int isRight=rootToNodePath(root->right, n, path);

    if(isLeft || isRight){
        return true;
    }

    path.pop_back();
    return false;
}
int LCA1(Node* root,int n1,int n2){
    vector<int> path1;
    vector<int> path2;

    rootToNodePath(root,n1,path1);
    rootToNodePath(root,n2,path2);

    int lca=-1;
    for(int i=0, j=0; (i<path1.size() && j<path2.size()); i++,j++){
        if(path1[i] != path2[i]){
            return lca;
        }
        lca=path1[i];
    }
    return lca;
}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=bt(nodes);
    
    int n1=4, n2=5; //lca=2
    cout<<LCA1(root,n1,n2);
    return 0;
}