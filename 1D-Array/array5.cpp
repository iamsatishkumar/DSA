//linear search of an element in array
#include<iostream>
using namespace std;
int main(){
    int num;
    int n;
    int arr[n];
    cout<<"enter size of array=";
    cin>>n;
    cout<<"enter no u want to find in array=";
    cin>>num;
    for(int i=0;i<n;i++){
        cout<<"enter element in array=";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            cout<<num<<"  is present in array";
        }
        }
    return 0;


}