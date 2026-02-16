//check odd or even
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"enter no : ";
    cin>>num;    
    if(num & 1==1){
        cout<<"odd";
    }else{
        cout<<"even";
    }
    return 0;
}