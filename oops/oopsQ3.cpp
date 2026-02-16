// Create a class BankAccount with private attributes accountNumber and 
//balance. Implement public methods deposit(), withdraw(), and getBalance() to 
//manage the account. 
#include<bits/stdc++.h>
#include<string>
using namespace std;
class BankAccount{
protected:
    string accountNumber;
    int balance=2500;
public:
    void deposit(int depositAmount){
        cout<<"money gets deposited:  "<<depositAmount<<endl;
        balance+=depositAmount;
    }
    void withdraw(int withdrawnAmount){
        if(withdrawnAmount>balance){
            cout<<"Insufficient balance"<<endl;
        }else{
            cout<<"money gets witdrawn : "<<withdrawnAmount<<endl;
            balance-=withdrawnAmount;
        }
    }
    void getBalance(){
        cout<<"your balance is : "<<balance<<endl;
    }
};
int main(){
    BankAccount s1;
    s1.deposit(500);
    s1.withdraw(1000);
    s1.getBalance();
    return 0;
}