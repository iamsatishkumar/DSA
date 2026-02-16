/*Level Order Traversal But print every level on different line*/
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
    Node* newNode=new Node(nodes[idx]);
    newNode->left=buildTree(nodes);
    newNode->right=buildTree(nodes);

    return newNode;
}
//Level traversal
void levelorder(Node* root){
    queue<Node*> q;
    if(root==NULL){
        return;
    }
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* currNode=q.front();
        q.pop();

        if(currNode==NULL){
            cout<<endl;
            if(q.empty()){
                break;
            }
            q.push(NULL);
        }else{
            cout<<currNode->data<<" ";
            
            if(currNode->left != NULL){
                q.push(currNode->left);
            }
            if(currNode->right != NULL){
                q.push(currNode->right);
            }   
        }        
    }
}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildTree(nodes);
    cout<<"root node = "<<root->data;//1
    cout<<endl;
    levelorder(root);
    return 0;

    
}
