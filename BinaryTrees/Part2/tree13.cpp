// Binary tree
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
//building tree
static int x=-1;
Node* buildTree(vector<int> nodes){
    x++;
    if(nodes[x]==-1){
        return NULL;
    }
    Node* newNode=new Node(nodes[x]);
    newNode->left=buildTree(nodes);
    newNode->right=buildTree(nodes);

    return newNode;
}

//level traversal
void levelTrav(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}
//find tree height
int treeHeight(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHt=treeHeight(root->left);
    int rightHt=treeHeight(root->right);

    int currHt=max(leftHt,rightHt) +1;

    return currHt;
}
//count no of nodes
int totalNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftCount=totalNodes(root->left);
    int rightCount=totalNodes(root->right);
    int currCount=(leftCount + rightCount) + 1;

    return currCount;
}
//find diameter of tree
//Approach 1
int diameter1(Node* root){ // O(n^2)
    if(root == NULL){
        return 0;
    }

    int currDiam=(treeHeight(root->left) + treeHeight(root->right)) + 1; // (leftHt + rightHt + 1)
    int leftDiam=diameter1(root->left);
    int rightDiam=diameter1(root->right);

    return max(currDiam,max(leftDiam,rightDiam));
}
//find diameter of tree
//Approach 2
pair<int,int> diameter2(Node* root){ // O(n)
    if(root == NULL){
        return make_pair(0,0);
    }
    //pair<int,int> ---> (diameter,height)
    pair<int,int> leftInfo=diameter2(root->left);
    pair<int,int> rightInfo=diameter2(root->right);

    int currDiam=leftInfo.second + rightInfo.second +1;
    int finalDiam=max(currDiam,max(leftInfo.second,rightInfo.second));
    int finalHt=max(leftInfo.second,rightInfo.second);

    return make_pair(finalDiam,finalHt);
}
//finding subtree of another tree
bool isIdentical(Node* root,Node* subroot){
    if(root==NULL && subroot==NULL){
        return true;
    }else if(root==NULL || subroot==NULL){
        return false;
    }
    //checkin root->data is equal or not to subroot->data
    //coz here we are checking all tree and subtree is equal or not
    if(root->data != subroot->data){
        return false;
    }
    //checking that given subtree should be equal both in lefttree and righttree of original tree
    return isIdentical(root->left,subroot->left)
            && isIdentical(root->right,subroot->right);
}
//subtree function
bool isSubtree(Node* root,Node* subroot){
    if(root==NULL && subroot==NULL){
        return true;
    }else if(root==NULL || subroot==NULL){
        return false;
    }

    if(root->data == subroot->data){
        if(isIdentical(root,subroot)){
            return true;
        }
    }
    //below these are to find where is starting 
    int isleftSubtree=isSubtree(root->left,subroot);
    //subtree is not present in left
    if(!isleftSubtree){//(!0 == 1)
        return isSubtree(root->right,subroot);//checking right
    }

    return true;
}
//Top view of a tree
void topView(Node* root){
    queue<pair<Node*,int>> q; //(node,hd)
    q.push(make_pair(root,0));

    map<int,int> m; // (hd,val)

    while(!q.empty()){
        pair<Node*,int> curr=q.front();
        q.pop();
        int currHd=curr.second;
        Node* currNode=curr.first;
        if(!m.count(currHd)){ // hd doesn't exist in map then add
            m[currHd]=currNode->data;
        }
        if(currNode->left != NULL){ // pushing left in queue
            q.push(make_pair(currNode->left,currHd-1));
        }
        if(currNode->right != NULL){ // pushing right in queue
            q.push(make_pair(currNode->right,currHd+1));
        }
    }
    //printing map
    for(auto i : m){
        cout<<i.second<<" ";
    }
    cout<<endl;
}
//print Kth level of tree
//by level order traversal
void kthlevel1(Node* root,int k){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int currLevel=1;

    while(!q.empty()){
        Node* curr=q.front();
        q.pop();

        if(curr==NULL){
            currLevel++;
            if(q.empty()){
                break;
            }
            q.push(NULL);
        }else{
            if(currLevel == k){
                cout<<curr->data<<" ";
            }
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        } 
    }
}
//print kth level of tree
//by recursion
void kthlevel2Helper(Node* root,int currlevel,int k){
    if(root==NULL){
        return;
    }
    if(currlevel == k){
        cout<<root->data<<" ";
    }
    kthlevel2Helper(root->left,currlevel+1,k);
    kthlevel2Helper(root->right,currlevel+1,k);
    //while backtrackin reducing one level
    currlevel=currlevel-1;

}
void kthlevel2(Node* root,int k){
    int currlevel=1;
    kthlevel2Helper(root,currlevel,k);
}
//Lowest common Ancestor
//root to node path
void rootToNodePath(Node* root,int n,vector<int> path){
    if(root==NULL || root->data == n){
        return;
    }
    path.push_back(root->data);


}
int lca(Node* root,int n1,int n2){
    vector<int> path1;
    vector<int> path2;



}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,6,-1,-1,7,-1,-1};
    Node* root=buildTree(nodes);

    //cout<<root->data;
    //levelTrav(root);
    //cout<<treeHeight(root);
    //cout<<totalNodes(root);
    //cout<<diameter1(root);
    //topView(root);
    //kthlevel1(root,3);
    //kthlevel2(root,3);

    return 0;
}