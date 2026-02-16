//Friends Functions & class 
#include<bits/stdc++.h>
#include<string>
using namespace std;
class A{
    string secret="secret data";
    friend class B;
    friend void revealSecret(A &obj);
    
};
class B{ //Becomes a friend class of A
public:
    void showSecret(A &obj){
        cout<<obj.secret<<endl;
    }
};
//friend function
void revealSecret(A &obj){
    cout<<obj.secret;
}
int main(){
    A a1;
    B b1;
    b1.showSecret(a1);
    revealSecret(a1);
    return 0;
}