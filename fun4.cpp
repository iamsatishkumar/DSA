//waf to print if a number is prime or not.
/*
#include<iostream>
using namespace std;
int prime(int a){
    for(int i=2;i<=a-1;i++){
        if(a%i==0){
            cout<<"entered no is not prime";
        }else{
            cout<<"entered no is  prime";
        }
    }
}
int main(){
    int num;
    cout<<"enter no:";
    cin>>num;
    prime(num);
    return 0;
}
*/
//print all primes in range 2 to n
#include<iostream>
using namespace std;

bool isprime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void allprimes(int n){
    for(int i=2;i<=n;i++){
    if(isprime(i)){
        cout<<i<<" ";
    }
    }
    cout<<endl;
}
int main(){
    
}