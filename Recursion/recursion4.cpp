//sum of N Natural numbers
#include<bits/stdc++.h>
using namespace std;
int Sum(int n){
    if(n==1){
        return 1;
    }
    int result=n+Sum(n-1);
    return result;
    
}
int main(){
    cout<<Sum(5);
    return 0;
}