/*print all possible soln os N Queens
igore that they can attack each other*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;
void print(vector<vector<char>> board){
    int n=board.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"---------\n";
}

void nQueens(vector<vector<char>> board,int row){
    int n=board.size();
    if(row == n){
        print(board);
        return;
    }
    for(int j=0; j<n; j++){//columns
        board[row][j]='Q';
        nQueens(board,row+1);
        board[row][j]='.';
    }    
}
int main(){
    vector<vector<char>> board;
    int n=3;
    for(int i=0; i<n; i++){
        vector<char> newRow;
        for(int j=0; j<n; j++){
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }

    nQueens(board,0);
    return 0;
}