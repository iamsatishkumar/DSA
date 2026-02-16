//reverse an array with extra space
#include<iostream>
using namespace std;

void printARR(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;

}
int main(){
    int arr[]={11,12,13,14,15};
    int n=sizeof(arr)/sizeof(int);
    int copyarr[n];
    for(int i=0; i<n; i++){
        copyarr[i]=arr[n-1-i];
    }
    for(int i=0;i<n;i++){
        arr[i]=copyarr[i];
    }
    printARR(arr,n);
    return 0;
}
