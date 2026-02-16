//check if array is sortecd
#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr1[],int n,int i){
    if(i==n-1){
        return true;
    }
    

    if(arr1[i]>arr1[i+1]){
        return false;
    }

    return isSorted(arr1,n,i+1);
    
}
int main(){
    int arr1[]={1,2,3,4,5};//sorted : 1
    int arr2[]={1,2,4,3,5};//unsorted : 0
    cout<<isSorted(arr1,5,0);
    return 0;
}