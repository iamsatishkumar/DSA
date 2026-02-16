//print x to the power n
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// without recursion
int power1(int x,int n){
    int result=1,i=1;
    while(i<=n){
        result*=x;
        i++;
    }
    return result;   
}
// with recursion : time complexity O(n)
int power2(int x,int n){
    if(n==0){
        return 1;
        
    }

    return x*power2(x,n-1);


}
//with recursion : time complexity O(log(n))
int power3(int x,int n){
    if(n==0){
        return 1;
    }


    int HalfPower=power3(x,n/2);
    int HalfPowerSquare=HalfPower*HalfPower;

    if(n%2!=0){
        return x * HalfPowerSquare;
    }
    return HalfPowerSquare;
}
int main(){
    cout<<"without recursion :"<<power1(3,4)<<endl;
    cout<<"with recursion > T.C = O(n) : "<<power2(3,5)<<endl;
    cout<<"with recursion > T.C = O(log n) : "<<power3(3,6)<<endl;
    
    return 0;
}