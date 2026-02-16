/*check valid parenthesis*/
#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isValid(string str) {  // O{n}
    stack<char> s;

    for(int i=0; i<str.length(); i++) {
        char ch=str[i];
        if(ch == '(' || ch== '{' || ch == '[') {//opening bracket
            s.push(ch);
        } else {//closing
            if(s.empty()) {
                return false;
            }

            //matching
            int top=s.top();
            if((top =='(' && ch == ')') ||
              (top =='{' && ch == '}') ||
              (top =='[' && ch == ']')) {
                s.pop();
            } else {
                return false;
            }

        } 
    }
    if(s.empty()) {
        return true;
    } else {}


}
int main() {
    string str1="([}])";//invalid : false
    string str2="([{}])";//valid : true
    cout<<isValid(str1)<<endl;
    cout<<isValid(str2)<<endl;
    return 0;
}