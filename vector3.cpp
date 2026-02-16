//pair sum
#include<iostream>
#include<vector>
using namespace std;
//brute force method
int main(){
    int target;
    cout<<"enter target sum : ";
    cin>>target;
    vector<int> arr={2,7,11,15};
    int n=arr.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if( arr[i] + arr[j] == target){
                cout<<i<<","<<j<<endl;
            }
        }
    }
    return 0;
}