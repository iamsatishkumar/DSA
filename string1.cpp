// Cin.getline()
#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    char word[30];
    cout<<"enter your word=";
    cin>>word;//it will ignore the word after (white space=space between words) 
    cout<<"your word was="<<word<<endl;
    cout<<"length="<<strlen(word)<<endl;
    */

    char sentence[30];
    cin.getline(sentence,30);
    cout<<"your word was="<<sentence<<endl;
    cout<<"length="<<strlen(sentence)<<endl;
    return 0;

}