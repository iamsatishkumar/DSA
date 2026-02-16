//pointer
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    int **pptr=&ptr;
    cout<<&a<<"="<<ptr<<endl;
    cout<<&ptr<<"="<<pptr<<endl;
    //Dereference operator:)😒
    cout<<*(&a)<<"="<<*ptr<<endl;
    cout<<*(&ptr)<<"="<<*pptr<<endl;
    cout<<*ptr<<endl;
    *ptr=20;//pointer can modify the value of variable
    cout<<*ptr<<"="<<a;

    return 0;

}