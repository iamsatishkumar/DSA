/* Valid Anagram
s="race"  t="care"  -> Anagram
s="tulip" t="lipid" -> not Anagram  */
#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
bool isAnagram(string word1,string word2){
    if(word1.length() != word2.length()){
        cout<<"not Anagram";
        return false;
    }
    unordered_map<char,int> m;
    for(int i=0; i<word1.length(); i++){
        if(m.count(word1[i])){
            m[word1[i]]++;
        }else{
            m[word1[i]]=1;
        }
    }
    for(int i=0; i<word2.length(); i++){
        if(m.count(word2[i])){
            m[word2[i]]--;
            if(m[word2[i]] == 0){//freq=0 means no curr char in map
                m.erase(word2[i]);
            }
            
        }else{
            cout<<"not Valid Anagram";
            return false;
        }
    }
    if(m.empty()){
        cout<<"valid Anagram";
        return true;
    }else{
        cout<<"invalid Anagram";
        return false;
    }
    
}
int main(){
    string word1="care";
    string word2="racc";
    isAnagram(word1,word2);
    return 0;
}