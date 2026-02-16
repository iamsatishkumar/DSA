// Friends Pairing 
//find total no of ways in which n friends can be paired up
//Each friend can only be paired once
#include<bits/stdc++.h>
#include<string>
using namespace std;
int friendsPairing(int n){
    if(n==1 || n==2){
        return n;
    }
    return friendsPairing(n-1) + (n-1) * friendsPairing(n-2);
}
int main(){
    cout<<friendsPairing(3);
    return 0;
}