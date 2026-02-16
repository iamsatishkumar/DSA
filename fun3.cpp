//WAF to find the binomial coefficient for given n & r.
/*
#include<iostream>
using namespace std;
int BC(int n,int r){
    int fn=1;
    int fr=1;
    int fnmr=1;
    for(int i=1;i<=n;i++){
        fn=fn*i;
    }
    cout<<"factorial of("<<n<<")="<<fn<<endl;
    for(int i=1;i<=r;i++){
        fr=fr*i;
    }
    cout<<"factorial of("<<r<<")="<<fr<<endl;
    for(int i=1;i<=n-r;i++){
        fnmr=fnmr*i;
    }
    cout<<"factorial of("<<n-r<<")="<<fnmr<<endl;
    int BinomialCoefficient;
    BinomialCoefficient=(fn/(fr*fnmr));
    cout<<"binomial coefficient="<<BinomialCoefficient;

}
int main(){
    int x,y;
    cout<<"enter value of n=";
    cin>>x;
    cout<<"enter value of r=";
    cin>>y;
    BC(x,y);
    return 0;
}
    */
//teacher method
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int bincoeff(int n,int r){
    int val1=factorial(n);
    int val2=factorial(r);
    int val3=factorial(n-r);

    int result=val1/(val2*val3);
    return result;
}
int main(){
    cout<<bincoeff(4,2)<<endl;
    return 0;
}    
