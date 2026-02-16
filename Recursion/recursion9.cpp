// Tiling Problem
// count total ways to tile a floor (2❎n) with tiles (2❎1)
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int Tp(int n){
    if(n==0 || n==1){
        return 1;    
    }
    if(n<0){
        return 0;
    }
    //vertical tiling
    int ans1=Tp(n-1);
    //Horizontal tiling
    int ans2=Tp(n-2);

    return ans1+ans2;
}
int main(){
    cout<<Tp(4);
    return 0;
}