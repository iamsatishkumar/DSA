/*check duplicate parenthesis
((x+y)) +z ---> true
(x+y) ---> false
((a+b)+(c+d)) ---> false*/
#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isDuplicate(string str) {  //o{n}
    stack<char> s;
    for(int i=0; i<str.length(); i++) {
        char ch=str[i];
        if(ch != ')') { //non closing
            s.push(ch);
        } else { //closing
            if(s.top()=='(') {//if we find closing on top
                return true;//Duplicate
            }
            while(s.top() != '(') {
                s.pop();
            }
            s.pop();
        }
    }
    return false;

}
int main() {
    string str1="((a+b))";
    string str2="((a+b)+(c+d))";
    cout<<isDuplicate(str1)<<endl;
    cout<<isDuplicate(str2)<<endl;
    return 0;
}
