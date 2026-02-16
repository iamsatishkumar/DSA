//wap to print the factorial of a number,n.
#include<iostream>
using namespace std;
int factN(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"factorial="<<fact<<endl;
    return fact;

}
int main(){
    int num;
    cout<<"enter no:";
    cin>>num;
    factN(num);
    factN(3);
    return 0;
}
