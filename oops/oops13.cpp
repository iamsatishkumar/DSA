//Static Keyword
//static variable infunction
#include<bits/stdc++.h>
#include<string>
using namespace std;
//Function without static keyword
void counter1(){
    int count=0;
    count++;
    cout<<"count:"<<count<<endl;
}
//Function with static keyword
void counter2(){
    static int count=0;//static varible only initialised once for the lifetime
    count++;
    cout<<"count:"<<count<<endl;
}
int main(){
    counter1();
    counter1();
    counter1();
    counter2();
    counter2();
    counter2();
    return 0;
}
