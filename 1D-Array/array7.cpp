//reverse an array with no extra space(very important🤞🤞😎😎)
#include<iostream>
using namespace std;
void reverseA(int *arr,int n){
    int start,end;
        start=0;
        end=n-1;
        while(start<end){
            int temp;//swap
            temp=arr[start];//in c++ swap function=swap(aee[start],arr[end]);            
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    
        for(int i=0; i<n; i++){
            cout<<arr[i]<<",";
        }
    
    
}
int main(){
    int arr[]={11,12,13,14,15};
    int n=sizeof(arr)/sizeof(int);
    reverseA(arr,n);
    return 0;
}