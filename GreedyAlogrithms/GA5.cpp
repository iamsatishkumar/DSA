/*Min Absolute Difference Pair
pair elements of A & B to "minimize sum of absolute differece between pairs)
A[n]={1,2,3}  B[n]={2,1,3}
here,logic is simple subtract smaller no wih smaller and larger with larger 
Thus, we can get min absolute diff b/w two no's*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int minAbsDiff(vector<int> A,vector<int> B){
    int ans=0;
    sort(A.begin(),A.end());//A is sorted in Ascending order
    sort(B.begin(),B.end());//B is sorted in Ascending order
    for(int i=0; i<A.size(); i++){
        int diff=abs(A[i]-B[i]);
        ans+=diff;
    }
    return ans;
}
int main(){
    vector<int> A={1,2,3};
    vector<int> B={2,1,3};

    cout<<minAbsDiff(A,B);
    return 0;
}