/*size of largest bst in bt*/
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
class Info{
public:
    bool isBST;
    int Min;
    int Max;
    int sz;//size

    Info(bool isBST,int Min,int Max,int sz){
        this->isBST=isBST;
        this->Max=Max;
        this->Min=Min;
        this->sz=sz;
    }

};

static int maxSize;

Info* largestBST(Node* root){
    //base case
    if(root==NULL){
        return new Info(true, INT_MAX,INT_MIN,0);
    }
    //Alternative base case
    //if(root==NULL){
    //    return NULL;
    //if(root->left == NULL && root->right == NULL){
    //   new Info(true, root->data, root->data, 0);
    //}


    Info* leftInfo = largestBST(root->left);
    Info* rightInfo = largestBST(root->right);

    int currMin=min(root->data, min(leftInfo->Min, rightInfo->Min));
    int currMax=max(root->data, max(leftInfo->Max, rightInfo->Max));
    int currSize=leftInfo->sz + rightInfo->sz + 1;

    if(leftInfo->isBST && rightInfo->isBST
        && root->data > leftInfo->Max
        && root->data < rightInfo->Min){
            maxSize=max(maxSize, currSize);
            return new Info(true, currMin, currMax, currSize);
        }
    return new Info(false, currMin, currMax, currSize);
}
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    Node* root=new Node(50);
    root->left=new Node(30);
    root->left->left=new Node(5);
    root->left->right=new Node(20);

    root->right=new Node(60);
    root->right->left=new Node(45);
    root->right->right=new Node(70);
    root->right->right->left=new Node(65);
    root->right->right->right=new Node(80);

    largestBST(root);
    cout<<"max size : "<<maxSize;
    cout<<endl;

}