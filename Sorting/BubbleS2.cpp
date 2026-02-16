//Selection sort
#include<iostream>
using namespace std;
void SelectionSort(int *arr,int n){
    for(int i=0; i<n; i++){
        int MinIdx=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[MinIdx]){
            MinIdx=j;
            }   
        }
        swap(arr[i],arr[MinIdx]);
        cout<<arr[i]<<",";
    }
}
int main(){
    int arr[]={5,4,1,3,2};
    int n=sizeof(arr)/sizeof(int);
    SelectionSort(arr,n);
    return 0;
}