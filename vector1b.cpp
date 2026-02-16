//how to take size of vector at runtime(resizing)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<float> vec1;
    int n;
    cout<<"enter size of vec :";
    cin>>n;
    vec1.resize(n);
    for(int i=0; i<n; i++){
        cin>>vec1[i];
    }
    cout<<"elements :";
    for(int i=0; i<n; i++){
        cout<<vec1[i]<<" ";
    }
    
    return 0;
} 