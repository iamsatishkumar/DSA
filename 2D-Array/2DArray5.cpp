//key search in sorted matrix by going to every element😒
#include<bits/stdc++.h>
using namespace std;
void SsortedMatrix(int Matrix[][4],int n,int m,int key){
    bool found=false;//flag to check if the key is found
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(Matrix[i][j]==key){
                cout<<"row="<<i<<endl<<"column="<<j<<endl;
                found=true;
            }
        }
    }
    if(!found){
        cout<<-1<<endl;
    }
    
}

int main(){
    int Matrix[4][4]={{10,20,30,40},
                      {15,25,35,45},
                      {27,29,37,48},
                      {32,33,39,50}};
    int key;
    cout<<"enter key=";
    cin>>key;

    SsortedMatrix(Matrix,4,4,key);
    return 0;
}