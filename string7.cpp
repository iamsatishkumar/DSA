// Member functions
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string str="I love c++ & java";
    cout<<"length="<<str.length()<<endl;
    cout<<"idx="<<str[4]<<" "<<str.at(4)<<endl;
    cout<<"substring="<<str.substr(0,7)<<endl;
    cout<<"starting idx occurance of word="<<str.find("c++")<<endl;
    return 0;

}