/*" itinerary " from Tickets
plane ticket pairs<from,to>
Chennai->Bengaluru
Mumbai->Delhi
Goa->Chennai
Delhi->Goa*/
#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
void itinerary(vector<pair<string,string>> pairs){
    unordered_map<string,string> m(pairs.begin(),pairs.end());//stored <from,to> in map
    unordered_set<string> s;
    //stored to/end in set
    for(int i=0; i<pairs.size(); i++){
        s.insert(pairs[i].second);
    }
    string start;
    //finding the starting point
    //if any location is not in set from/start in set that mean's that location is our starting point
    for(int i=0; i<pairs.size(); i++){
        if(s.find(pairs[i].first) == s.end()){
            start=pairs[i].first;
            break;
        }
    }
    //now printing the journey
    cout<<start;
    while(m.count(start)){
        cout<<" --> "<<m[start];
        start=m[start];//Destination is our new start
    }
}
int main(){
vector<pair<string,string>> pairs;
pairs.push_back(make_pair("Chennai","Bengaluru"));
pairs.push_back(make_pair("Mumbai","Delhi"));
pairs.push_back(make_pair("Goa","Chennai"));
pairs.push_back(make_pair("Delhi","Goa"));

itinerary(pairs);
return 0;

}