#include<iostream>
using namespace std;
int main(){
int arr[5];
int n=sizeof(arr)/sizeof(int);
cout<<"length of array="<<n<<endl;
for(int i=0;i<n;i++){
    cout<<"array("<<i<<")=";
    cin>>arr[i];
    
}
for(int i=0;i<n;i++){
    cout<<"arry("<<i<<")="<<arr[i]<<endl;
}
return 0;
}
