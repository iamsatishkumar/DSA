//valid Anagram
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string str1,str2;
    cout<<"enter words=";
    getline(cin,str1);
    getline(cin,str2);
    for(int i=0; i<str1.length(); i++){
        for(int j=0; j<str1.length()-i; j++){
        if(str1[j]>str1[j+1])
        swap(str1[j],str1[j+1]);        
        }
    }
    for(int i=0; i<str1.length(); i++){
        cout<<str1[i]<<",";
    }
    cout<<endl;
    for(int i=0; i<str2.length(); i++){
        for(int j=0; j<str2.length()-i; j++){
            if(str2[j]>str2[j+1])
            swap(str2[j],str2[j+1]);
        }
    }
    for(int i=0; i<str1.length(); i++){
        cout<<str2[i]<<","; 
    } 
    cout<<endl;  
    for(int i=0; i<str1.length(); i++){
        if(str1[i]==str2[i]){
        cout<<"valid anagram"<<endl;
        }else{
            cout<<"not valid anagram"<<endl;
        }
    }    
    return 0;
}