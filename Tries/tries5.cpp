/*Count unique subString 
count "Total distinct subStrings" in a string
str = "ababa" , ans=10
Approach <1> find suffix <2> create trie with suffix <3> count no of nodes including root which is empty in trie*/
#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
class Node{
public:
    unordered_map<char,Node*> children;
    bool endOfWord;
    Node(){
        endOfWord=false;
    }
};
class Trie{
public:
    Node* root;

    Trie(){
        root=new Node();
    }

    void insert(string key){
        Node* temp=root;
        for(int i=0; i<key.length(); i++){
            char ch=key[i];
            if(temp->children.count(ch) == 0){
                temp->children[ch]=new Node();

            }
            temp=temp->children[ch];
        }
        temp->endOfWord=true;
    }

    bool search(string key){
        Node* temp=root;
        for(int i=0; i<key.length(); i++){
            char ch=key[i];
            if(temp->children.count(ch)){
                temp=temp->children[ch];
            }else{
                return false; 
            }
        }
        return temp->endOfWord;
    }
};

int countNodes(Node* root){
    int count=1;

    for(auto child : root->children){//here child is pair<char,Node*>
        count = count + countNodes(child.second);
    }
    return count;
    
}
int distinctSubStr(string str){
    Trie trie;
    //suffix
    for(int i=0; i<str.length(); i++){
        trie.insert(str.substr(i));
    }

    return countNodes(trie.root);
}
int main(){
    vector<string> words={"apple", "app", "mango", "man", "woman"};
    cout<<distinctSubStr("ababa");
    return 0;

}