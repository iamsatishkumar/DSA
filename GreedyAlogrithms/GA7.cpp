/*Indian Coins
we are given an infinite supply of denominations[1,2,5,10,20,50,100,500,2000]
Find the "min no of coins to make change" for a value v
{v=121,ans=3(100+20+1)},{v=590,ans=4(500+50+20+20)},{v=4026,ans=5(2000+2000+20+5+1)}
algo-move backwards where ans+=v/coins then remaining v=v%coins*/
#include<bits/stdc++.h>
using namespace std;
int indianCoin(vector<int> coins,int amount){
    int ans=0;
    int n=coins.size()-1;
    if(amount==0){
        return 0;
    }
    for(int i=n; i>=0 && amount>0; i--){
        if(coins[i]<=amount){
           ans+=amount/coins[i];
           amount%=coins[i]; 
        }
    }
    if(amount==0){
        return ans;
    }else{
        return -1;
    }
}
int main(){
    vector<int> coins={1,2,5,10,20,50,100,500,2000};
    int amount=11;
    cout<<indianCoin(coins,amount);

    return 0;
}
