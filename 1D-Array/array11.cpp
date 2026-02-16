//maximum subarray->brute force/normal method
#include<iostream>
using namespace std;
void Maxsubarraysum1(int *arr,int n){
    int maxSum= INT8_MIN;
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int currsum=0;
            for(int i=start; i<=end; i++){
                currsum=currsum+arr[i];
            }
            
            cout<<currsum<<",";
            maxSum=max (maxSum,currsum);//max,min module in c++
        }
        cout<<endl;
    }
    cout<<"maximum subarray sum="<<maxSum;

}
    
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    Maxsubarraysum1(arr,n);
    return 0;
}