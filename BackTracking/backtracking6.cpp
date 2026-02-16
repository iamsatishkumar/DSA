/*Grid Ways*/
#include<iostream>
#include<vector>
using namespace std;
int gridWays(int r,int c,int m,int n){
    if(r==m-1 && c==n-1){//base case
        return 1;
    }
    if(r >= m || c >= n){
        return 0;
    }
    int val1=gridWays(r,c+1,m,n);//right
    int val2=gridWays(r+1,c,m,n);//down

    return val1 + val2;
}
int main(){
    int m=3;
    int n=3;
    cout<<gridWays(0,0,m,n);
    return 0;
} 