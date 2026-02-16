/*Fractional Knapsack(solved using greedy algorith),0-1 Knapsack(solved using dynamic programming)
put items in Knapsack to get the "maximum total value"(maximum price product in bag=Knapsack) in knapsack
value/price=[60,100,120] to their correspondig weight=[10,20,30] where bag size(w=50)
*/
//without using extra space (vector<float> price) 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool compare(pair<double,int> &p1,pair<double,int> &p2){
    return p1.first>p2.first;//arranging higher price at first(ratio)
}
int fractionalKnapSack(vector<int> value,vector<int> weight,int w){
    int n=value.size();
    
    vector<pair<double,int>> ratio(n,make_pair(0.0,0));
    for(int i=0; i<n; i++){
        double r=value[i]/(double)weight[i];//price
        ratio[i]=make_pair(r,i);//{r,idx} idx gives the location of r
    }
    sort(ratio.begin(),ratio.end(),compare);
    
    int val=0;
    for(int i=0; (i<n && w>0); i++){
        int idx=ratio[i].second;//it gives index of curr weight
        if(weight[idx]<=w){
            w=w-weight[idx];
            val=val+ratio[i].first*weight[idx];
        }else{
            val=val+w*ratio[i].first;
            w=0;
        }

    }
    return val;


}

int main(){
    vector<int> value={60,100,120};
    vector<int> weight={10,20,30};
    int w=50;
    cout<<fractionalKnapSack(value,weight,w);
    return 0;

}