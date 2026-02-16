//passed by reference
#include<iostream>
using namespace std;
void fun(int arr[]){
    arr[0]=100;
}
int main(){
    int arr[]={1,2,3,4,5};
    cout<<"arry(0)="<<arr[0]<<endl;//dereference=*arr it will also print arry(0)=1
    //function call by using reference
    fun(arr);//passing array name is equal to passinf the pointer
    cout<<"value of a will change in main function due to call by reference i.e="<<arr[0];
    return 0;
}