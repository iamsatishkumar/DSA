/* Subarray Sum equals " k "
arr={1,2,3} k=3
count(ans)=2  //(1,2), (3)*/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void countSubArray(vector<int> arr,int k){
    int count=1;
    unordered_map<int,int> m;
    m[0]=0;
    int sum=0;
    for(int i=0; i<arr.size(); i++){
        sum+=arr[i];
        if(sum - k == 0){
            
        }
        

    }
    cout<<"count of sub array sum equal to k :"<<ans<<endl;
}
void countSub(vector<int> arr, int target){//O(n^2)
    int count=0;
    for(int st=0; st<arr.size(); st++){
        int sum=0;
        for(int ed=st; ed<arr.size(); ed++){
            sum+=arr[ed];
            if(sum==target){
                count++;
            }
        }
    }
    cout<<count;

}
int main(){
    vector<int> arr={1,2,3};
    int target=3;
    //countSub(arr,target);
    countSubArray(arr,target);
    return 0;
}
