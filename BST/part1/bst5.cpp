/*print root to leaf path*/
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
Node* insert(Node* root,int val){
    if(root==NULL){
        root=new Node(val);
        return root;
    }
    
    if(root->data > val){
        root->left=insert(root->left,val);
    }else{
        root->right=insert(root->right,val);
    }
    return root;
}
Node* buildBST(int arr[],int n){
    Node* root=NULL;

    for(int i=0; i<n; i++){
        root=insert(root,arr[i]);
    }
    return root;
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void printpath(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
void PathHelper(Node* root,vector<int> &path){
    if(root==NULL){
        return;
    }
    path.push_back(root->data);
    if(root->left == NULL && root->right == NULL){//Leaf
        printpath(path);
        path.pop_back();
        cout<<endl;
        return;
    }
    PathHelper(root->left,path);
    PathHelper(root->right,path);
    path.pop_back();
}

void rootToLeafpath(Node* root){
    vector<int> path;
    PathHelper(root,path);
}
int main(){
    int arr[]={8,5,3,1,4,6,10,11,14};
    Node* root=buildBST(arr,9);

    inorder(root);
    cout<<endl;

    rootToLeafpath(root);
    
    return 0;
}