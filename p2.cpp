#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter no:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
