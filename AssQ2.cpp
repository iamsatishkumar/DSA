/*
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter year:";
    cin>>year;
    if(year==100){
        cout<<"not leap year";
    }else if(year%4==0){
        cout<<"leap year";
    }else{
        cout<<"not leap year";
    }


    return 0;
}
    */
//selection sort
#include<bits/stdc++.h>
using namespace std;
void SltSort(int arr[],int n){
    for(int i=0; i<n; i++){
        int MinIdx=i;
        for(int j=i+1; j<n; j++){
           if(arr[MinIdx]>arr[j]){
            MinIdx=j;
           }
        }
        swap(arr[i],arr[MinIdx]);
        cout<<arr[i]<<",";
            
    }
}


int main(){
    int arr[]={5,3,4,0,7,2};
    int n=sizeof(arr)/sizeof(int);
    SltSort(arr,n);
    return 0;
}