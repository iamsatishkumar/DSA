/*merge 2 BST's
1st- inorder sequence BST1(sorted)
2nd- inorder sequence BST2(sorted)
3rd- merge these two sequence into a sorted sequence
4th- create a balanced tree from sorted sequence*/
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
void getinorederSequence(Node* root,vector<int> &nodes){
    if(root == NULL){
        return;
    }
    getinorederSequence(root->left,nodes);
    nodes.push_back(root->data);
    getinorederSequence(root->right,nodes);

}
Node* BSThelper(vector<int> nodes,int st,int end){
    if(st > end){
        return NULL;
    }

    int mid=st + (end-st)/2;
    Node* currNode=new Node(nodes[mid]);
    currNode->left=BSThelper(nodes,st,mid-1);
    currNode->right=BSThelper(nodes,mid+1,end);
    return currNode;
}
Node* mergedBSTs(Node* root1,Node* root2){
    vector<int> nodes1;
    vector<int> nodes2;
    vector<int> mergedVector;//sorted sequence(nodes1 + nodes2)
    getinorederSequence(root1,nodes1);
    getinorederSequence(root2,nodes2);
    
    int i=0; 
    int j=0; 

    while(i < nodes1.size() && j < nodes2.size()){
        if(nodes1[i] < nodes2[j]){
            mergedVector.push_back(nodes1[i]);
            i++;
        }else{
            mergedVector.push_back(nodes2[j]);
            j++;
        }
    }
    while(i<nodes1.size()){
        mergedVector.push_back(nodes1[i]);
        i++;
    }
    while(j<nodes2.size()){
        mergedVector.push_back(nodes2[j]);
        j++;
    }
    return BSThelper(mergedVector,0,mergedVector.size()-1);
}
//preorder sequence
void printMerged(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printMerged(root->left);
    printMerged(root->right);
}
int main(){
    Node* root1=new Node(2);
    root1->left=new Node(1);
    root1->right=new Node(4);

    Node* root2=new Node(9);
    root2->left=new Node(3);
    root2->right=new Node(12);

    Node* root=mergedBSTs(root1,root2);
    printMerged(root);
    return 0;
}
