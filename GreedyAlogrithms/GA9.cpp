/*Job Sequence Problem(it is also asked to give the job sequence/job which we selected to do)
Maximize the total profit if only one job can be sheduled at a time
job A=4,20    job x=no of days to complete task(deadline),payment(amount earned)
job B=1,10  NOTE=to compelete a job task atleast 1 day is consumed/used
job C=1,40
job d=1,30       */
#include<bits/stdc++.h>
#include<vector>
using namespace std;
//class of Job
class Job {
public:
    int idx;
    int deadline;
    int profit;

    Job(int i,int deadline,int profit){
        this->idx=i;
        this->deadline=deadline;
        this->profit=profit;
    }
};

int maxProfit(vector<pair<int,int>> pairs){
    int n=pairs.size();

    //vecotr of objects simillar to vector of int(vector<int>,vector<pair>,vector<char>)
    //we make vector of object when we have to store more than two parameters
    vector<Job> jobs;

    for(int i=0; i<n; i++){
        jobs.emplace_back(i,pairs[i].first,pairs[i].second);//(i,deadline,profit)
    }

    //sorting jobs in descending order on the basis of profit
    sort(jobs.begin(),jobs.end(),
    //this is Lambda Function
    [](Job &a,Job &b){
        return a.profit>b.profit;
    });
    
    cout<<"selecting job"<<jobs[0].idx<<endl;
    int profit=jobs[0].profit;
    int safeDeadline=2;

    for(int i=1; i<n; i++){
        if(jobs[i].deadline >= safeDeadline){
            cout<<"selscting job"<<jobs[i].idx<<endl;
            profit+=jobs[i].profit;
            safeDeadline++;
        }
    }
    cout<<"max profit : "<<profit<<endl;
    return profit;
    
}

int main(){
    
    vector<pair<int,int>> pairs{4,make_pair(0,0)};
    pairs[0]=make_pair(4,20);
    pairs[1]=make_pair(1,10);
    pairs[2]=make_pair(1,40);
    pairs[3]=make_pair(1,30);

    maxProfit(pairs);

    return 0;

}
