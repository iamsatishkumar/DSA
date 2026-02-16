/*#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    int max=arr[0];
    cout<<"enter the size of array=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter element=";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<arr[0]<<endl;
    cout<<max;
    return 0;
}*/
#include<iostream>
using namespace std;
int main(){
    int marks[]={55,45,99,84,76};
    int n=sizeof(marks)/sizeof(int);
    int max=marks[0];
    int min=marks[0];
    for(int i=0;i<n;i++){
        if(max<marks[i]){
            max=marks[i];
        }
        for(int i=0;i<n;i++){
            if(min>marks[i]){
                min=marks[i];
            }
        }    

    }
    cout<<"maximum="<<max<<endl;
    cout<<"minimum="<<min<<endl;
    return 0;
}