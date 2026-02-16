//print character pyramid
#include<iostream>
using namespace std;
int main(){
    int n,i;
    char ch='A';
    cout<<"enter no:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}
