//Diagonal sum
#include<bits/stdc++.h>
using namespace std;
void DSmatrix(int Matrix[][3],int n,int m){
    int primaryD=0,secondaryD=0;
    int Tsum=0;
    for(int i=0; i<n; i++){
        primaryD += Matrix[i][i];
        secondaryD += Matrix[i][m-i-1];
    }
    Tsum=primaryD+secondaryD;
    cout<<Tsum<<endl;
}
//teacher method
//time comlexity=O(n^2)
int dsMatrix(int Matrix[][3],int n,int m){
    int sum=0;
    for(int i=0; i<n; i++){//rows
        for(int j=0; j<m; j++){
            if(i == j){
                sum += Matrix[i][j];
            }else if(j == n-i-1){
                sum += Matrix[i][j];
                }
        }
    }
    cout<<sum;
}


int main(){
    int Matrix[4][4]={{1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                {13,14,15,16}};

    int Matrix2[3][3]={{1,2,3},
                       {4,5,6},
                       {7,8,9}};
    DSmatrix(Matrix2,3,3);//this will print common element(my method)
    dsMatrix(Matrix2,3,3);//it will not print common element
    return 0;
}