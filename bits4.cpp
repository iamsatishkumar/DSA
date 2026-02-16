//waf to update the ith bit in a number according to given value (0 or 1)
//num=7, i=2, val=0
//num=7, i=3, val=1
#include<iostream>
using namespace std;
int setvalue(int num,int i,int value){
    int bitmask=1 << i;
    if(value == 0){
        return num & ~(bitmask);
    }else{
        return num | bitmask;
    }
}
int main(){
    cout<<setvalue(7,2,0)<<endl;
    cout<<setvalue(7,3,1);
    return 0;
}