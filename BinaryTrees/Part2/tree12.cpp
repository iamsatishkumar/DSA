/*TOP VIEW OF A TREE
Approach 1st-level order traversal(BFS)
         2nd-queue<pair<Node*,HD>> (node,horizontal distance)
         3rd-loop while !q.empty() 
         4th- check currNode exist's in map or not if not then add */
 #include<iostream>
 #include<vector>
 #include<queue>
 #include<map>
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

    return newNode;
}
//Top View of a Tree
void topView(Node* root){
    queue<pair<Node*,int>> q;//(node, HD)
    map<int,int> m;//(HD, node->val)

    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<Node*,int> curr=q.front();
        q.pop();

        Node* currNode=curr.first;
        int currHD=curr.second;

        if(m.count(currHD) == 0){//HD doesn't exist in map(add HD in map)
            m[currHD]=currNode->data;
        }
        //adding left in queue
        if(currNode->left != NULL){
            pair<Node*,int> leftPair=make_pair(currNode->left,currHD-1);
            q.push(leftPair);
        }
        //adding right in queue
        if(currNode->right != NULL){
            pair<Node*,int> rightPair=make_pair(currNode->right,currHD+1);
            q.push(rightPair);
        }
    }//here every element will be in map
    //printing map
    for(auto it : m){
        cout<< it.second << " ";
    }
    cout<<endl;
}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,6,-1,-1,7,-1,-1};
    Node* root=bt(nodes);
    cout<<root->data<<endl;
    topView(root);
    return 0;
}