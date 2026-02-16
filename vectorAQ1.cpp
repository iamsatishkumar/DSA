//Q1
#include<iostream>
#include<vector>
using namespace std;
vector<int> RepeatedMissing(vector<int> vec){
    int x=1;
    vector<int> ans;
    for(int i=0; i<vec.size()-1; i++){
        if(vec[i]!=x){
            ans.push_back(i);
            ans.push_back(x);
            return ans;
            
        }else{
            x++;
        }
    }

}
int main(){
    vector<int> vec={1,2,3,4,4,6,7,8};
    vector<int> Ans=RepeatedMissing(vec);
    cout<<Ans[0]<<","<<Ans[1]<<endl;
    return 0;
}