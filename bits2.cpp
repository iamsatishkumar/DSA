//get,set,clear ith bit 
#include<iostream>
using namespace std;
int getIthBit(int num,int i){
    int bitmask=1 << i;
    if(!(num & bitmask)){
        return 0;
    }else{
        return 1;
    }
}

int setIthBit(int num,int i){
    int Bitmask=1 << i;
    return num | Bitmask;
}

int clearIthBit(int num,int i){
    int Bitmask= ~ (1 << i);
    return num & Bitmask;
}
int main(){
    cout<<getIthBit(6,2)<<endl;
    cout<<setIthBit(6,4)<<endl;
    cout<<clearIthBit(6,2)<<endl;
    return 0;
}