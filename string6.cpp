//for(char ch:str) learned how to use it to print character of string without using for loop
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string str1;
    getline(cin,str1);
    cout<<str1<<endl;
    //for(int i=0; i<str1.length(); i++){
    //    cout<<str1[i]<<",";
    //}
    for(char ch:str1){
        cout<<ch<<",";
    }
    return 0;
}