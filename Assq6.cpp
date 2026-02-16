// wap to prnit the maximum occurance of consecutive 0 and 1
#include<bits/stdc++.h>
using namespace std;
void MaxFreq(int arr[],int n){
    int freqZero=0, freqOne=0;
    int McountZero=0, McountOne=0;
    for(int i=0; i<n; i++){
        //for zero
        if(arr[i] == 0){
            freqZero++;
            McountZero=max(McountZero,freqZero);
        }
        else{
            freqZero=0;
        }
    }
    for(int i=0; i<n; i++){
        //for one
        if(arr[i] == 1){
            freqOne++;
            McountOne=max(McountOne,freqOne);
        }else{
            freqOne=0;
        }
    }
        cout<<McountZero<<","<<McountOne<<endl; //to see the freq of zero and one
        if(McountZero > McountOne){
            cout<<"Maxcount is zero="<<McountZero<<endl;
        }else{
            cout<<"Maxcount is one="<<McountOne<<endl;
        }   
}
int main(){
    int arr[]={0,0,0,1,1,0,0,1,1,1,1};
    int n=sizeof(arr)/sizeof(int);
    MaxFreq(arr,n);
    return 0;
}