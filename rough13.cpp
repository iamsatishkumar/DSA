/*Question 2 : Print out the sum of the numbers in the second row of the “nums” array. 
Example : 
Input - int nums[ ][ ] = { {1,4,9}, {11,4,3}, {2,2,3} }; 
Output - 18*/
#include<iostream>
#include<vector>
using namespace std;
//using array
void pSum(int arr[][3],int m,int n){
    int sum=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i==1){
                sum+=arr[i][j];
            }
        }
    }
    cout<<"sum :"<<sum<<endl;
}
//using vector
void PSum(vector<vector<int>> vec){
    int sum=0;
    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<vec[i].size(); j++){
            if(i==1){
                sum+=vec[i][j];
            }
        }
    }
    cout<<"vec sum :"<<sum<<endl;
}
int main(){
    vector<vector<int>> vec={{1,4,9}, {11,4,3}, {2,2,3}};
    int arr[3][3]={{1,4,9}, {11,4,3}, {2,2,3}};
    pSum(arr,3,3);
    PSum(vec);
    return 0;
}