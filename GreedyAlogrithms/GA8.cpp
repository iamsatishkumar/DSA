/*Job Sequence Problem
Maximize the total profit if only one job can be sheduled at a time
job A=4,20    job x=no of days to complete task(deadline),payment(amount earned)
job B=1,10  NOTE=to compelete a job task atleast 1 day is consumed/used
job C=1,40
job d=1,30       */
#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> p1,pair<int,int> p2){//this is Lambda Function
        return p1.second>p2.second;//arranging on earning
    }
int maxProfit(vector<pair<int,int>> job){
    //sort job pair in descending order on basis of earning 
    sort(job.begin(),job.end(),compare);
    //first-->deadline; second-->profit;
    
    
    //At first day earning
    int profit=job[0].second;//1st day we will choose max profit job
    int safeDay=2;//after doing 1st job which atlest takes one day to do now present day =2
    for(int i=1; i<job.size(); i++){
        if(job[i].first>=safeDay){
            profit+=job[i].second;
            safeDay++;
        }
    }
    return profit;
}

int main(){
    
    vector<pair<int,int>> job{4,make_pair(0,0)};
    job[0]=make_pair(4,20);
    job[1]=make_pair(3,10);
    job[2]=make_pair(1,40);
    job[3]=make_pair(1,30);

    cout<<maxProfit(job);

    return 0;

}
