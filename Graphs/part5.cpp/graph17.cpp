/* Disjoint Set */
#include<bits/stdc++.h>
using namespace std;
class DisjointSet {
public:
    int n;
    vector<int> par;
    vector<int> rank;

    DisjointSet(int n){
        this->n=n;

        for(int i=0; i<n; i++){
            par.push_back(i);//at start everone is itself par
            rank.push_back(0);//at start rank is zero for all
        }
    }

    int find(int x){
        if(par[x]==x){
            return x;
        }
        return par[x]=find(par[x]); //path compression
    }

    void unionByRank(int a,int b){
        int parA=par[a];
        int parB=par[b];

        if(rank[parA] == rank[parB]){
            rank[parA]++;
            par[parB]=parA;
        }else if(rank[parA] > rank[parB]){
            par[parB]=parA;
        
        }else{ //(rank[parA] < rank[parB])
            par[parA]=parB;
        }
    }
    //it is not part of disjoint set 
    //it is used to get the information
    //coz in our eg parent is 0 
    void getInfo(){
        for(int i=0; i<n; i++){
            cout<<i<<" : par-> "<<par[i]<<" , rank-> "<<rank[i]<<endl;
        }
    }
};
int main( ){
    DisjointSet dj(6);
    dj.unionByRank(0,2);
    cout<<dj.find(2)<<endl;
    dj.unionByRank(1,3);
    dj.unionByRank(2,5);
    dj.unionByRank(0,3);
    cout<<dj.find(2)<<endl;
    dj.unionByRank(0,4);
    dj.getInfo();

    return 0;

}
