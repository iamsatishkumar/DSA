//valid palindrome(eg=racecar,markram,madam)
#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(char word[],int n){
    int start=0,end=n-1;
    while(start<=end){
        if(word[start]!=word[end]){
            cout<<"not valid palindrome";
            return false;
            start++;
            end--;
        }   
    }
    cout<<"not valid palindrome";
    return true;

}



int main(){
    char word[100];
    cout<<"enter your word=";
    cin>>word;
    ispalindrome(word,strlen(word));
    return 0;
}