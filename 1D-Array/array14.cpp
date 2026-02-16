//Best time to buy and sell stocks
#include<iostream>
using namespace std;
void maxProfit(int *arr,int n){
    int result=INT8_MIN;
    for(int buy=0; buy<n; buy++){
        int profit=0;
        for(int sell=buy+1; sell<n; sell++){
            profit=arr[buy]-arr[sell];
            cout<<"day("<<sell<<")="<<profit<<",";
            result=max(result,profit);
        }
        cout<<endl;
    }
    cout<<"maximum profit="<<result<<endl;
}
void StockBS(int *arr,int n){
    int result=0;
    for(int buy=0; buy<n; buy++){
        for(int sell=buy+1; sell<n; sell++){
           int profit=arr[sell]-arr[buy];
           result=max(profit,result);
            }

    }
    cout<<result;
}
int main(){
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(int);
    maxProfit(arr,n);
    StockBS(arr,n);
    return 0;
}