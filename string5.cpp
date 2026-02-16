// application of string starts from this file
//getline(cin,str,'$'); learned to use

#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string str="Hello";
    cout<<str<<endl;
    str="yellow";
    cout<<str<<endl;
    // to take input with white spaces
    getline(cin,str);
    cout<<str<<endl<<str.length()<<endl;
    return 0;
}