//static keywor
//static variable in class
#include<bits/stdc++.h>
#include<string>
using namespace std;
class Example1{
public:
    int x=0;
};
class Example2{
public:
    static const int x=0;
};
int main(){
    Example1 eg1;
    Example1 eg2;
    Example1 eg3;
    Example2 eg1;
    Example2 eg2;
    Example2 eg3;
    

    cout<<eg1.x++<<endl;
    cout<<eg2.x++<<endl;
    cout<<eg3.x++<<endl;

    cout<<eg1.x<<endl;
    cout<<eg2.x<<endl;
    cout<<eg3.x<<endl;
    return 0;
}