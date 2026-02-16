//2D Dynamic array
#include<iostream>
using namespace std;
int main(){
    int row,cols;
    cout<<"enter row=";
    cin>>row;
    cout<<"enter cols=";
    cin>>cols;

    int* *matrix= new int*[row];
    for(int i=0; i<row; i++){
        matrix[i]= new int[cols];//for every row allocating the size of cols
    }
    //data store
    int x=1;
    for(int i=0; i<row; i++){
        for (int j=0; j<cols; j++){
            matrix[i][j]=x++;
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    //matrix[i][j]=*(*(matrix + i) + j) derefrence of ptr
    cout<<matrix[2][2]<<endl;
    cout<<*(*(matrix + 2) + 2)<<endl;
    return 0;
}