/* WEAKEST SOLDIER  
For a M×N matrix, "a row is weaker than a row j" if one of the following is true:
--> The number of soldiers in row is less than the number of soldiers in row j.
--> Both rows have the same number of soldiers ans i < j.
Find "k weakest" rows
soldier=1   
public=0   */
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Row {
public:
    int count;
    int idx;

    Row(int count,int idx){
        this->count=count;
        this->idx=idx;
    }

    bool operator < (const Row &obj) const {
        if(this->count == obj.count){
            return this->idx > obj.idx;
        }
        return this->count > obj.count;//minHeap
    }
};
void weakSoldier(vector<vector<int>> matrix,int k){
    vector<Row> rows;
    for(int i=0; i<matrix.size(); i++){
        int count=0;
        for(int j=0; j<matrix[i].size(); j++){
            if(matrix[i][j] == 1){
                count++;
            }
        }
        rows.push_back(Row(count,i));
    }
    priority_queue<Row> pq(rows.begin(),rows.end());

    for(int i=0; i<k; i++){
        cout<<"Row"<<pq.top().idx<<endl;
        pq.pop();
    }

}
int main(){
    vector<vector<int>> matrix={{1, 0, 0, 0},
                                {1, 1, 1, 1},
                                {1, 0, 0, 0},
                                {1, 0, 0, 0}};

    weakSoldier(matrix,2);
    return 0;
}