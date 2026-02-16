//check for power of 2
#include<bits/stdc++.h>
using namespace std;
bool ispowerTwo(int num){
    if(!(num & (num-1))){
        
        return true;
    }else{
        
        return false;
    }
}
int main(){
    cout<<ispowerTwo(8)<<endl;
    cout<<ispowerTwo(11)<<endl;
    cout<<ispowerTwo(32)<<endl;
    return 0;
}