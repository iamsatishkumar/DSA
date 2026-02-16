//addition & substraction of constant in pointer
#include<iostream>
using namespace std;
void printarr(int *ptr,int n){
    for(int i=0; i<n; i++){
        cout<<*ptr<<",";//dereference of ptr
        ptr++;
    }

}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    printarr(arr,n);
}
