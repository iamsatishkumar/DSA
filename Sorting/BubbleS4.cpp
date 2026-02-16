//Counting sort
#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
}

void CountSort(int arr[],int n){
    int freq[100000]={0};//range
    int minV=INT8_MAX, maxV=INT8_MIN;
    for(int i=0; i<n; i++){
        minV=min(minV,arr[i]);
        maxV=max(maxV,arr[i]);
    }

    //1st step-O(n)
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    //2nd step-O(range)=maxx-min
    for(int i=minV ,j=0; i<=maxV; i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
    print(arr,n);


}
int main(){
    int arr[]={1,4,1,3,2,4,3,7};
    int n=sizeof(arr)/sizeof(int);
    CountSort(arr,n);
    return 0;
}