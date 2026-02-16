//Maximum subarray->2nd method
#include<iostream>
using namespace std;
void Maxsubarraysum2(int *arr,int n){
    int Msum=INT8_MIN;
    for(int start=0; start<n; start++){
        int currsum=0;
        for(int end=start; end<n; end++){
            currsum +=arr[end];
            Msum=max(Msum,currsum);//math module in c++
        }
        cout<<currsum<<",";
    }
    cout<<endl<<"maximum subarray sum="<<Msum;

}
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    Maxsubarraysum2(arr,n);
    return 0;
}