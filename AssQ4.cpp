//all sorting
#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

//Bubble sort
void BubbleSort(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    print(arr,n);
    cout<<endl;
}

//selection sort
void SelecSort(int arr[],int n){
    for(int i=0; i<n; i++){
        int minIdx=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIdx]){
                minIdx=j;
            }
            
        }
        swap(arr[i],arr[minIdx]);
        cout<<arr[i]<<" ";
       
    }
    cout<<endl;
}
//insertion sort
void InSort(int arr[],int n){
    for(int i=1; i<n; i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;

    }
    print(arr,n);



}
int main(){
    int arr[]={5,4,3,1,2,0,15,11,7};
    int n=sizeof(arr)/sizeof(int);
    BubbleSort(arr,n);
    SelecSort(arr,n);
    InSort(arr,n);
    return 0;
}    