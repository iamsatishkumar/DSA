//Staircase Search 😍 T.C=(n+m)
#include<bits/stdc++.h>
using namespace std;
//top right to bottom
bool SearchSortedMatrix(int Matrix[][4],int n,int m,int key){
    int row=0, col=m-1;
    //t.c=(n+m)
    while(row<n && col>=0){
        if(key==Matrix[row][col]){
            cout<<"row="<<row<<" col="<<col<<endl;
            return true;
        }else if(key<Matrix[row][col]){
            //left
            col--;
        }
        else{
            //down
            row++;
        }
    }
    cout<<"key not found"<<endl;
    return false;
}

//bottom left to top
bool SearchSortedMatrix1(int Matrix[][4],int n,int m,int key){
    int row=n-1, col=0;
    while(row>=0 && col<m){
        if(key==Matrix[row][col]){
            cout<<"row="<<row<<"col="<<col<<endl;
            return true;
        }
        else if(key < Matrix[row][col]){
            row--;
        }
        else{
            col++;
        }
    }
    cout<<"key not found"<<endl;
    return false;
}
int main(){
    int Matrix[4][4]={{10,20,30,40},
                      {15,25,35,45},
                      {27,29,37,48},
                      {32,33,39,50}};
    int key;
    cout<<"enter key=";
    cin>>key;
                
                
    SearchSortedMatrix(Matrix,4,4,key);
    SearchSortedMatrix1(Matrix,4,4,key);
    return 0;
}