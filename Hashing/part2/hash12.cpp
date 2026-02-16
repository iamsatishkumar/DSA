/* Largest Subarray with " Sum 0 "
[15,-2,2,-8,1,7,10]
subArr1={-2,2} , subArr2={-2,2,-8,1,7} , subArray3={-8,1,7}
largest subAraay whose sum=0 is subArr2 */
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void largestSum(vector<int> arr){//O(n)
    unordered_map<int,int> m;//sum, idx
    int currSum=0;
    int length=0;
    int currlength=0;
    for(int j=0; j<arr.size(); j++){
        currSum+=arr[j];
        if(currSum == 0){//if first elem is 0
            length=max(length,j+1);
        }
        if(m.count(currSum)){
            currlength=j-m[currSum];//j-idx
            length=max(currlength,length);
        }else{
            m[currSum]=j;
        }
    }
    cout<<length;
}
void subArray(vector<int> arr){//)(n^2)
    int maxSize=0;
    for(int st=0; st<arr.size(); st++){
        int currSum=0;
        for(int ed=st; ed<arr.size(); ed++){
            currSum+=arr[ed];
            if(currSum==0){
                maxSize=max(maxSize,ed-st+1);
            }
        }
    }
    cout<<maxSize;

}
int main(){
    vector<int> arr={15,-2,2,-8,1,7,10};
    //subArray(arr);
    largestSum(arr);
    return 0;
}














/*
Kadan's Algorithm
int maxSubArray(vector<int> arr){
    int Max=arr[0];
    int currMax=0;
    for(int i=0; i<arr.size(); i++){
        currMax+=arr[i];
        Max=max(currMax,Max);
        if(currMax < 0){
            currMax=0;
        }

    }
    return Max;

}
    
int main(){
    vector<int> arr={15,-2,2,-8,1,7,10};
    vector<int> arr2={-3,-1,-2};
    cout<<maxSubArray(arr2);
    return 0;
}
    */