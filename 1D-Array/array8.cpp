//binary search
#include<iostream>
using namespace std;
int binsearch(int *arr,int n,int key){
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;//key found
        }
        else if(arr[mid]<key){//2nd half
            start=mid+1;
        }
        else{
            end=mid-1;//first half
        }
        
    }
    return -1;

}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    cout<<binsearch(arr,n,4)<<endl;
    return 0;
}