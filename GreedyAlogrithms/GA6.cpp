/*Max Length chain of pairs
A pair(c,d) can come after pair(a,b) if b<c
Find the Longest chain(max no of pairs=longest chain) which can be formed from a given set of pairs*/
#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> p1,pair<int,int> p2){
    return p1.second<p2.second;//first ends comes first(ascending order),first end means starts first 
}
int LongestChain(vector<pair<int,int>> pairs){
    sort(pairs.begin(),pairs.end(),compare);//sorting in ascending order on ending basis
    int chain=1;//p0
    int currEnd=pairs[0].second;//

    for(int i=1; i<pairs.size(); i++){
        if(currEnd<pairs[i].first){
            chain=chain+1;
            currEnd=pairs[i].second;
            cout<<i<<","<<currEnd<<endl;

        }
    }
    
    return chain;

}
int main(){
    vector<pair<int,int>> pairs(5,make_pair(0,0));
    pairs[0]=make_pair(5,24);
    pairs[1]=make_pair(39,60);
    pairs[2]=make_pair(5,28);
    pairs[3]=make_pair(27,40);
    pairs[4]=make_pair(50,90);
    cout<<"Longest chain : "<<LongestChain(pairs);
    return 0;
    
}