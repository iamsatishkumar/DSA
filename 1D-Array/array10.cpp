#include<iostream>
using namespace std;
void idxsubA(int *arr,int n){
    for(int start=0; start<n; start++){
        cout<<"start="<<start<<"  end=";
        for(int end=start; end<n; end++){
            cout<<end<<",";
        }
        cout<<endl;
    }

}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    idxsubA(arr,n);
    return 0;
}