/*Fractional Knapsack(solved using greedy algorith),0-1 Knapsack(solved using dynamic programming)
put items in Knapsack to get the "maximum total value"(maximum price product in bag=Knapsack) in knapsack
value/price=[60,100,120] to their correspondig weight=[10,20,30] where bag size(w=50)
*/
//using extra space (vector<float> price) other than pair vector
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
float fractionalKnapSack(vector<pair<int,float>> &wp){
    int bw=50;//bag size 50kg
    float val=0.0;
    for(int i=0; (i<wp.size() && bw>0); i++){
        if(wp[i].first <= bw){
            val=val + wp[i].first*wp[i].second;
            bw=bw - wp[i].first;
        }else{
            val=val+bw*wp[i].second;
            bw=0;
        }
    }
    
    return val;


}
bool compare(pair<int,float> &p1,pair<int,float> &p2){
    return p1.second>p2.second;//arranging higher price at first
}
int main(){
    vector<int> value={60,100,120};
    vector<int> weight{10,20,30};
    vector<float> price(3,0);
    //calculating price of each product
    for(int i=0; i<value.size(); i++){
        price[i]=value[i]/weight[i];
    }
    //vpk is a pair vector which stores (weight,price)  
    vector<pair<int,float>> wp(3,make_pair(0,0));
    for(int i=0; i<wp.size(); i++){
        wp[i]=make_pair(weight[i],price[i]);
    }
    sort(wp.begin(),wp.end(),compare);//[{10,6},{20,5},{30,4}{weight,price}]
    //sorted higher price at first

    cout<<fractionalKnapSack(wp);
    return 0;

}