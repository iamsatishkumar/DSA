//reverse a string using stack(recursion)
#include<bits/stdc++.h>
using namespace std;

void pushAtBottom(stack<int> &s, int val) { //o(n)
    if(s.empty()) {
        s.push(val); //push at top = push at bottom
        return;
    }
    int temp=s.top();
    s.pop();
    pushAtBottom(s,val);
    s.push(temp);
}

string reverseString(string str) {
    string ans; 
    stack<char> s;

    for(int i=0; i<str.size(); i++) {
        s.push(str[i]);
    }

    while(!s.empty()) {
        char top=s.top();
        ans+=top;
        s.pop();
    }
    return ans;
}
int main() {
    string str="abcd";
    cout<<reverseString(str)<<endl;
    return 0;
}