//maximum subarray->kadan's method(very important)
#include<iostream>
using namespace std;
void Maxsubarraysum3(int *arr,int n){
    int currsum=0;
    int Msum=INT8_MIN;
    for(int start=0; start<n; start++){
        currsum +=arr[start];
        Msum=max(Msum,currsum);
        if(currsum<=0){
            currsum=0;
        }
    }
    cout<<"maximum subarray sum="<<Msum;
}
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    Maxsubarraysum3(arr,n);
    return 0;
}