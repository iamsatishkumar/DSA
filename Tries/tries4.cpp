/* startsWith problem
complete this for a trie : "bool startsWith(string prefix)"
words[]={"apple", "app", "mango", "man", "woman"}
prefix="app" -> true
prefix="moon" -> false
prefix= "wom" -> true */
#include<iostream>
#include<vector>
#include<string>
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
    Node* root;
public:
    Trie(){
        root=new Node();
    }

    void insert(string key){
        Node* temp=root;

        for(int i=0; i<key.length(); i++){
            if(temp->children.count(key[i]) == 0){
                temp->children[key[i]]=new Node();//insert
            }
            temp=temp->children[key[i]];
        }
        temp->endOfWord=true;
    }

    bool search(string key){
        Node* temp=root;
        for(int i=0; i<key.length(); i++){
            if(temp->children.count(key[i])){
                temp=temp->children[key[i]];
            }else{
                return false;
            }
        }
        if(temp->endOfWord == true){
            return true;
        }else{
            return false;
        } 
    }

    bool startsWith(string key){
        Node* temp=root;
        for(int i=0; i<key.length(); i++){
            if(temp->children.count(key[i])){
                temp=temp->children[key[i]];
            }else{
                return false;
            }
        }
        return true;
    }
};
bool isFound(vector<string> words,string key){
Trie trie;
    for(int i=0; i<words.size(); i++){
        trie.insert(words[i]);
    }
    
    return trie.startsWith(key);
}


int main(){
    vector<string> words={"apple", "app", "mango", "man", "woman"};
    cout<<isFound(words,"appp");
    return 0;
}
