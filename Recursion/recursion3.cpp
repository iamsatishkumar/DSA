//print n in descending & ascending order
#include<bits/stdc++.h>
#include<string>
using namespace std;
void print1(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";//kaam
    print1(n-1);//faith,next call

}
void print2(int n){
    if(n==0){
        return;
    }
    print2(n-1);
    cout<<n<<" ";
}
int main(){
    print1(5);
    cout<<endl;
    print2(5);
    return 0;
}