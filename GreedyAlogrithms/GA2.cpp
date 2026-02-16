/*pairs in c++
it is a STL container to store 2 objects*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int,int> p1,pair<int,int> p2){
    return p1.second<p2.second;// it will sort in ascending order on the basis of end time coz .second is end time values
}
int main(){
    vector<int> start={0,1,3};
    vector<int> end={9,2,4};


    vector<pair<int,int>> activity(3, make_pair(0,0));
    activity[0]=make_pair(0,9);
    activity[1]=make_pair(1,2);
    activity[2]=make_pair(3,4);
    for(int i=0; i<activity.size(); i++){
        cout<<"A"<<i<<" : "<<activity[i].first<<" , "<<activity[i].second<<endl;
    }
    // now if we want to sort it
    sort(activity.begin(),activity.end(),compare);

    //printing after shifting
    cout<<"---------sorted---------\n";
    for(int i=0; i<activity.size(); i++){
        cout<<"A"<<i<<" : "<<activity[i].first<<" , "<<activity[i].second<<endl;
    }
    return 0;
}
