#include<iostream>
using namespace std;
int Csum(int a,int b){
    int s=a+b;
    return s;
}
int product(int a,int b){
    int p=a*b;
    return p;
}
int oddeven(int num){
    if(num%2==0){
        cout<<"even:)";
    }else{
        cout<<"odd:(";
    }
    return num;
}
int main(){
   int sum=Csum(3,4);
    cout<<"sum:"<<sum<<endl;
    int prod=product(2,3);
    cout<<"product:"<<prod<<endl;
    int n;
    cout<<"enter no:";
    cin>>n;

    oddeven(n);

    return 0;

}