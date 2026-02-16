//Quick sort
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void printArr(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int partition(int arr[],int si,int ei){
    int i=si-1;
    int pivot=arr[ei];

    for(int j=si; j<ei; j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    i++;//to swap pivot
    swap(arr[pivot],arr[ei]);
    //pivot idx = i
    return i;
}
void quickSort(int arr[],int si,int ei){//O(n*logn)
    if(si >= ei){
        return;
    }
    int pivot=partition(arr,si,ei);

    quickSort(arr,si,pivot);//left half
    quickSort(arr,pivot+1,ei);//right half
}
int mai(){
    int arr[]={6,3,7,5,2,4};
    int n=6;
    quickSort(arr,0,n-1);
    printArr(arr,n);
    return 0;
}