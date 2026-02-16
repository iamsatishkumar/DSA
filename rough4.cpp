//Rhombus pattern
#include<bits/stdc++.h>
using namespace std;
void RhombusPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int j=0; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    

}
int main(){
    RhombusPattern(7);
    return 0;
}