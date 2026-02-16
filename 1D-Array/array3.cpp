//array in function
//In c++ array name treated as pointer
#include<iostream>
using namespace std;
int main(){
    int arr[]={11,12,13,14,15};
    cout<<"array(0)="<<arr[0]<<endl;
    cout<<"array(1)="<<arr[1]<<endl;
    cout<<"address at array(0)="<<arr<<endl;
    //array name is arr which is treated as a pointer
    //eg=(int a=2; int *ptr=&a; here ptr stores the address of a;)
    cout<<"address at array(1)="<<arr+1<<endl;
    //dereference of array
    cout<<"value at array(0)="<<*arr<<endl;//arr[0]
    cout<<"value at array(1)="<<*(arr+1)<<endl;//arr[1]
    return 0;
}