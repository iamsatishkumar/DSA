/*Minimum Spanning Tree (MST)
MST is a subset of the edges of a "Connected,edge-Weighted undirected graph"
without any cycles and with the "minimum possible total edge weight" */
#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<pair<int,int>>* l;
public:
    Graph(int V){
        this->V=V;
        l=new list<pair<int,int>> [V];
    }

    void addEdge(int u,int v,int wt){
        l[u].push_back(make_pair(v,wt));
        l[v].push_back(make_pair(u,wt));
    }
    void primsAlgo(int src){
        vector<bool> mst(V,false);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; //min heap

        pq.push(make_pair(0,src));//[wt,vertex]
        int cost=0;

        while(!pq.empty()){
            int u=pq.top().second; //vertex
            int wt=pq.top().first; //wt
            pq.pop();
            
            if(!mst[u]){
                mst[u]=true;
                cost+=wt;
                list<pair<int,int>> neighbours=l[u];
                for(pair<int,int> n : neighbours){
                    int v=n.first;
                    int currWt=n.second;
                    pq.push(make_pair(currWt,v));

                }

            }
        }
        cout<<cost<<endl;
    }
};
int main(){
    //prim's algo graph
    Graph graph(4);

    graph.addEdge(0,1,10);
    graph.addEdge(0,2,15);
    graph.addEdge(0,3,30);

    graph.addEdge(1,3,40);

    graph.addEdge(2,3,50);

    graph.primsAlgo(0);
    return 0;
}
