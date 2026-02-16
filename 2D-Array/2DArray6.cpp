//key search in sorted matrix by binary search 😎
#include<bits/stdc++.h>
using namespace std;
void SsortedMatrix(int Matrix[][4],int n,int m,int key){
    for(int row=0; row<n; row++){
        int start=0, end=m-1;
        
        while(start<=end){
            int Mid = (start+end)/2;
            if(Matrix[row][Mid] == key){
                cout<<"key found at row="<<row<<" column="<<Mid<<endl;
                return;
            }
            else if(Matrix[row][Mid]<key){
                start=Mid+1;
                
            }else{
                end=Mid-1;
            }
            start++;

        }
        

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