/*Question 2 : You are given two strings s1 and s2 of equal length. A string swap is an 
operation where you choose two indices in a string (not necessarily different) and 
swap the characters at these indices. 
Return true if it is possible to make both strings equal by performing at most one 
string swap on exactly one of the strings. Otherwise, return false. 
Example : 
Input: s1 = "bank", s2 = "kanb" Output: 
true 
Explanation: For example, swap the first character with the last character of s2 to 
make "bank".*/
#include<bits/stdc++.h>
#include<string>
using namespace std;
void isEqual(string str1,string str2){
    int arr[2]={0};
    if(str1.length()==str2.length()){
        for(int i=0; i<str1.length(); i++){
            if(str1[i]!=str2[i]){
                arr[i]=i;
            }
        }
        
    }
    char temp=str2[arr[0]];
    str2[arr[0]]=str2[arr[1]];
    str2[arr[1]]=temp;
    cout<<str2;

   

}
int main(){
    string str1="bank";
    string str2="kanb";
    isEqual(str1,str2);
    return 0;
}