//print sub array;
#include<iostream>
using namespace std;
void printsa(int *arr,int n){
    for(int start=0; start<n; start++){
        int subA=0;
        for(int end=start; end<n; end++){
        
        for(int i=start; i<=end; i++){
            subA=arr[i];
            cout<<subA;
        }
        cout<<",";
    }
    cout<<endl;   
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    printsa(arr,n);
    return 0;
}