/*Diameter of a Tree O(n^2)
--------------  Approach_1   -------------*/
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
//finding height of tree
int height(Node* root){//O(n)
    if(root == NULL){
        return 0;
    }
    int leftht=height(root->left);
    int rightht=height(root->right);
    int ht=max(leftht,rightht) + 1;

    return ht;
}
//finding diameter of tree
int diameter(Node* root){//O(n^2)
    if(root == NULL){
        return 0;
    }
   
    int currDiam=height(root->left) + height(root->right) + 1;//containing root of tree
    int LeftDiam=diameter(root->left);
    int RightDiam=diameter(root->right);
    
    return max(currDiam,max(LeftDiam,RightDiam));
}
int main(){
    vector<int> nodes={1,2,3,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildingtree(nodes);
    cout<<"root is : "<<root->data<<endl;
    cout<<"tree ht is : "<<height(root)<<endl;
    cout<<"Diameter of Tree is : "<<diameter(root)<<endl;


    return 0;


}