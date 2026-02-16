/*LLongest word with all prefix
Longest word such that all of it's prefixes exist in array[lexicographical smallest]
dict[] = {"a", "banana", "app", "appl", "ap", "apply", "apple"}*/
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
    Node* root;
public: 
    Trie(){
        root=new Node();
    }

    void insert(string str){
        Node* temp=root;
        for(int i=0; i<str.length(); i++){
            if(temp->children.count(str[i]) == 0){
                temp->children[str[i]]=new Node();
            }
            temp=temp->children[str[i]];
        }
        temp->endOfWord=true;
    }

    bool search(string str){
        Node* temp=root;
        for(int i=0; i<str.length(); i++){
            if(temp->children.count(str[i])){
                temp=temp->children[str[i]];
            }else{
                return false;
            }
        }
        return temp->endOfWord;
    }

    void longestHelper(Node* root,string &ans,string temp){
        for(pair<char,Node*> child : root->children){
            if(child.second->endOfWord){
                temp+=child.first;

            if( (temp.size() == ans.size() && temp < ans) || (temp.size() > ans.size()) ){
                ans=temp;
            }
            longestHelper(child.second,ans,temp);
            temp=temp.substr(0, temp.size()-1);
            }
        }
        
    }

    string longestStringWithEOW(){
        string ans="";
        longestHelper(root,ans,"");
        return ans;
    }
};
string longestString(vector<string> dict){
    Trie trie;
    //building a trie
    for(int i=0; i<dict.size(); i++){
        trie.insert(dict[i]);
    }
    return trie.longestStringWithEOW();

}
int main(){
    vector<string> dict={"a", "banana", "app", "appl", "ap", "apply", "apple"};
    cout<<longestString(dict);
    return 0;
}