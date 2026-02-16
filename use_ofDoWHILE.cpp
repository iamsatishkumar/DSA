#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter no that is mltiple of 10 :"<<endl;
    
    do{
        cout<<"enter a no :";
        cin>>num;
        
        if(num%10==0){
            cout<<"entered no is multiple of 10 "<<endl;
            continue;
        }
        else{
            cout<<"no is not multiple of 10.  continoue..."<<endl;
            break;
        }

    }
    while(true);
    return 0;


}