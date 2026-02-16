/*Question 1 : Print the number of all 7’s that are in the 2d array. 
Example : 
Input - int arr[ ][ ] = { {4,7,8}, {8,8,7} }; n = 2, m = 3 
Output - 2 */
#include<iostream>
#include<vector>
using namespace std;
//using vector
void printKey(vector<vector<int>> arr,int key){
    vector<vector<int>> ans;
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            if(arr[i][j]==key){
                ans.push_back({i,j});

            }
        }
    }
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<",";
        }
        cout<<endl;
    }
}
//using array
void PrintKey(int matrix[][3],int m,int n,int key){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j]==key){
                cout<<i<<","<<j<<endl;
            }
        }
    }
}
int main() {
    vector<vector<int>> arr={{4,7,8},{8,8,7}};
    int matrix[2][3]={{4,7,8},{8,8,7}};
    printKey(arr,7);
    PrintKey(matrix,2,3,7);
    return 0;
   
    return 0;
}