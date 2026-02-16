/*Deque in c++*/
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_front(2);
    dq.push_front(1);
    //1 2
    dq.push_back(3);
    dq.push_back(4);
    //1 2 3 4
    dq.pop_front();
    //2 3 4
    dq.pop_back();
    //2 3
    cout<<dq.front();//2
    cout<<dq.back();//3
    return 0;
}