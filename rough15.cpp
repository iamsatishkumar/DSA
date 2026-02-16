/*Question 1 : Count how many times lowercase vowels occurred in a String entered 
by the user. */
#include<iostream>
#include<string>
using namespace std;
int countVowels(string str){
    int CountVowels=0;
    string vowels="aeiou";
    for(int i=0; i<vowels.length(); i++){
        for(int j=0; j<str.length(); j++){
            if(vowels[i]==str[j]){
                CountVowels++;
            }
        }
    }
    return CountVowels;
}
int CountVowel(string str){
    int count=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
            str[i]=='o' || str[i]=='u');
            count++;
    }
    return count;
    
}
int main(){
    string str="satiashuu";
    cout<<countVowels(str)<<endl;
    cout<<CountVowel(str);
    return 0;
}