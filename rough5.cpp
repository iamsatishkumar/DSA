// Print the Palindromic Pattern with Numbers. n=5
#include<bits/stdc++.h>
using namespace std;
void Npalindrome(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){//for spacing( always focus on left space )
            cout<<" ";
        }
        int num1=i+1;
        for(int j=0; j<i+1; j++){
            cout<<num1--;
        }
        int num2=2;
        for(int j=0; j<i; j++){
            if(i>=1){
                cout<<num2++;
                
            }
        }
        
        
        cout<<endl;
    }
   
}
// maam method
void palindrome(int n){
      for(int i=1; i<=n; i++){
        //spacing
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        //nums backward
        for(int j=i; j>=1; j--){
            cout<<j;
        }
        //nums forward
        for(int j=2; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    Npalindrome(5);
    palindrome(5);
    return 0;
}