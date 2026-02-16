//Question 1 : Write a function to check if a number is a palindrome in C++. 
//(121 is a palindrome, 321 is not)
#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(int num){
    int originalNum=num;
    int copiedNum=0;
    while(num>0){
        int last_digit=num%10;
        copiedNum=copiedNum*10+last_digit;
        num/=10;
    }
    return originalNum==copiedNum;
} 
int main(){
    int num=121;
    if(ispalindrome(num)){
        cout<<"palindrome";
    } else {
        cout<<"not palindrome";
    }

    return 0;
}