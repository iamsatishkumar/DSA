/*Subtree of another tree
Return true if there is a subtree of root with the same structure and node values of subroot and false otherwise*/
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
Node* buildingtree(vector<int> nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }
    Node* newNode=new Node(nodes[idx]);
    newNode->left=buildingtree(nodes);
    newNode->right=buildingtree(nodes);

    return newNode;

}
//identical function
bool isidentical(Node* root,Node* subroot){
    if(root==NULL && subroot==NULL){
        return true;
    }else if(root==NULL || subroot==NULL){//that means not identical
        return false;
    }
    //matching nodes 
    if(root->data != subroot->data){
        return false;
    }
    //for identical both should be true
    return isidentical(root->left,subroot->left) 
           && isidentical(root->right,subroot->right);    

}
//subtree function
bool isSubtree(Node* root,Node* subroot){
    if(root == NULL && subroot == NULL){//that mean's subroot are identical
        return true;
    }else if(root == NULL || subroot == NULL){//that mean's subroot are not available in root
        return false;
    }

    if(root->data == subroot->data){
        //idenical for subtree(strucure,nodes is same then identical)
        if(isidentical(root,subroot)){
            return true;
        //if isidentical true then return true coz if it return false then we will check in right of subroot(coz if subroot is 
        //present in both  left & right of root tree see example in notebook)
        }
    }

    int isleftSubtree=isSubtree(root->left,subroot);
    //subroot is not present in left subtree of root tree,so now we will check in rightsubtree
    if(!isleftSubtree){
        return isSubtree(root->right,subroot);//checking in rightsub tree of root
    }

    return true;
}

int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildingtree(nodes);

    Node* subroot=new Node(2);
    subroot->left=new Node(4);
    subroot->right=new Node(5);


    cout<<isSubtree(root,subroot)<<endl;
    //true=1 , false=0
    return 0;

}