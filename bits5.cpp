//waf to clear last ith bits of a number
//num=15, i=2
#include<iostream>
using namespace std;
void clearlastIthbits(int num,int i){
    int bitmask= ~(0) << i;
    num = num & bitmask;
    cout<<num;
}
int main(){
    clearlastIthbits(15,2);
    return 0;
}