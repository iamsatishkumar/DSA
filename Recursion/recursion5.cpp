//print Nth Fibonacci Number..  
//n=5
#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    int fibN=fibonacci(n-1)+fibonacci(n-2);
    return fibN;

}
int main(){
    cout<<fibonacci(5);
    return 0;
}