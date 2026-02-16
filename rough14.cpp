/*Question 3 : Write a program to Find Transpose of a Matrix. 
What is Transpose? 
Transpose of a matrix is the process of swapping the rows to columns. For a 2x3 
matrix, 
Matrix 
a11 a12 a13 
a21 a22 a23 
Transposed Matrix 
a11 a21 
a12 a22 
a13 a23*/
#include<iostream>
using namespace std;
void transpose(int matrix[][3],int m,int n){
    int transpose[n][m]={{0}};
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            transpose[j][i]=matrix[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int matrix[2][3]={{1,2,3}, {4,5,6}};
    transpose(matrix,2,3);
    return 0;
}