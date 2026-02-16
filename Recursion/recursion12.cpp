//Binary String Problem
//Print all Binary of size N without any consecutive 1s
#include<iostream>
using namespace std;
int process(int n){
    n=3*n;
    if(n%2!=0){
        return 2*n;
    }
    return n;

}
int main(){
    int t;
    cin>>t;
    cout<<process(t)<<endl;
    cout<<t;
    return 0;
}