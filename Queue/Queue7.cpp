/*finding 1st non repeating character
str="aabccxb"
first update idx of ch & push ch if queue is not empty and front of queue has freq greater
than 1 then pop() till the front has freq <=1
NOTE--->front element of queue is first non repeating element
All characters are of lowercase*/
#include<iostream>
#include<string>
#include<queue>
using namespace std;
void fnrc(string str){
    int freq[26]={0};//used to count the freq of characters
    queue<char> q;
    for(int i=0; i<str.length(); i++){
        char ch=str[i];
        freq[ch-'a']++;//ch-'a(if ch is a then a-a=0idx)(if ch is b then b-a=1)
        q.push(ch);
        while(!q.empty() && freq[q.front()-'a'] > 1){//q.front()-'a' will give us idx
            q.pop();
        }
        if(q.empty()){
            cout<<"-1";
        } else {
            cout<<q.front();
        }
    }
}
int main(){
    string str="aabccxb";
    fnrc(str);
    
    return 0;
}