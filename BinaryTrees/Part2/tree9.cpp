/*Diameter of a Tree O(n)
--------------  Approach_2   -------------*/
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
pair<int,int> diameter(Node* root){//O(n)
    if(root == NULL){
        return make_pair(0,0);
    }
    //(diameter,height)
    pair<int,int> leftInfo = diameter(root->left);
    pair<int,int> rightInfo = diameter(root->right);

    int currDiam = leftInfo.second + rightInfo.second + 1;//( LH + RH + 1 )
    int finalDiam = max(currDiam,max(leftInfo.first,rightInfo.first));
    int finalHt = max(leftInfo.second,rightInfo.second) + 1;
    
    return make_pair(finalDiam,finalHt);

}
int main(){
    vector<int> nodes={1,2,3,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildingtree(nodes);
    cout<<"root is : "<<root->data<<endl;
    cout<<"tree ht is : "<<height(root)<<endl;
    cout<<"Diameter of Tree is : "<<diameter(root).first<<endl;


    return 0;


}