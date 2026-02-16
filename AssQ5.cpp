#include<bits/stdc++.h>
using namespace std;
void BinarySearch(int arr[],int n, int key){
    bool found=false;
    int start=0, end=n-1;
    int MidV=(start+end)/2;
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            cout<<"index of key="<<i<<endl;
            found=true;
        }else if(arr[i] < key){
            start=MidV+1;
        }else{
            end=MidV-1;
        }
    }
    if(!found){
        cout<<"key not found in arr";
    }

}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cout<<"enter key=";
    cin>>key;
    BinarySearch(arr,n,key);
    return 0;
}