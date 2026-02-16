#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> vec,int target){
    int start=0,end=vec.size()-1;
    vector<int> ans;
    while(start < end){
        int currsum=vec[start]+vec[end];
        if(currsum==target){
            ans.push_back(start);
            ans.push_back(end);
              
        }else if(currsum>target){
            end--;
        }else{
            start++;
        }
    }
    cout<<ans[0]<<","<<ans[1];
    return ans;
   
}
int main(){
    vector<int> vec={2,7,11,15};
    pairsum(vec,18);
    return 0;
}