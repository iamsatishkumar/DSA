/*Activity selection
Select the max. no. of activites that can be performed by a single person
(a person can work on one activity at a time)*/
#include<iostream>
#include<vector>
using namespace std;
int maxActivites(vector<int> start,vector<int> end){
    //sort on end time
    //A0 selected
    int count=1;//count 1st activity as array are sorted 
    int currEndtime=end[0];
    for(int i=1; i<start.size(); i++){
        if(currEndtime<=start[i]){//non overlapping
            count++;
            currEndtime=end[i];
        }
    }
    return count;

}
int main(){
    vector<int> start={1,3,0,5,8,5};
    vector<int> end={2,4,6,7,9,9};
    cout<<"total activity : "<<maxActivites(start,end);
    return 0;

}