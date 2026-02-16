#include<bits/stdc++.h>
#include<string>
using namespace std;
class Parent{
public:
    void show(){
        cout<<"parent class show..\n";
    }
    virtual void hello(){
        cout<<"parent hello..\n";
    }
};
class Child : public Parent{
public:
    void show(){
        cout<<"parent class show..\n";
    }
    void hello(){
        cout<<"child hello..\n";
    }
};
int main(){
    Child child1;
    Parent *ptr;

    ptr = &child1;//Run time Binding 
    ptr->hello();//Virtual Function
    return 0;
}