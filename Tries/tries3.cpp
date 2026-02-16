/* prefix problem */
#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
class Node{
public:
    unordered_map<char,Node*> children;
    int freq;
    bool endOfWord;

    Node(){
        endOfWord=false;
        freq=0;
    }
};
class Trie{
    Node* root;
public:
    Trie(){
        root=new Node();
        root->freq=-1;
    }

    void insert(string key){
        Node* temp=root;

        for(int i=0; i<key.length(); i++){
            if(temp->children.count(key[i]) == 0){
                temp->children[key[i]]=new Node();//insert
                temp->children[key[i]]->freq=1;
            }else{
                temp->children[key[i]]->freq++;
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
    string getPrefix(string key){//O(L)
        Node* temp=root;
        string prefix="";
        for(int i=0; i<key.size(); i++){
            prefix += key[i];
            if(temp->children[key[i]]->freq == 1){
                break;
            }else{
                temp=temp->children[key[i]];
            }
        }
        return prefix;
    }
};

void prefixProblem(vector<string> dict){//O(n*L)
    Trie trie;
    for(int i=0; i<dict.size(); i++){
        trie.insert(dict[i]);
    }
    for(int i=0; i<dict.size(); i++){
        cout<<trie.getPrefix(dict[i])<<endl;
    }
}

int main(){
    vector<string> Dict={"zebra", "dog", "duck", "dove",};
    
    prefixProblem(Dict);
    return 0;
}
