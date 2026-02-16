/*" Dijkstra's Algorithm "
(weighted -> non negative)
here "Shortes path from src to all vertices for weightd graph"
it is a "Greedy Algorithm"*/
#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<climits>
using namespace std;
class Edge{
public:
    int v;
    int wt;
    Edge(int v,int wt){
        this->v=v;
        this->wt=wt;
    }
};

void dijkstra(int src,vector<vector<Edge>> graph,int V){ //O [(V+E)*logV]
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq; //min heap
    //pair(dist[v], v); -> coz in c++ heap sort on the basis os 1st value if u want on 2nd then create a comparator using struct
    vector<int> dist(V, INT_MAX);
    
    pq.push(make_pair(0,src));
    dist[src]=0;

    while(!pq.empty()){
        int u=pq.top().second;
        pq.pop();

        vector<Edge> edges=graph[u];
        for(Edge e : edges){ //e.v -> vertex & e.wt -> wt of vertex
            if(dist[e.v] > dist[u] + e.wt){
                dist[e.v]= dist[u] + e.wt;
                pq.push(make_pair(dist[e.v], e.v));// e.v=src(neighbour vertex)
            }  
        }
    }
    for(auto d : dist){
        cout<<d<<" ";
    }
    cout<<endl;
}


int main(){
    int V=6;
    vector<vector<Edge>> graph(V); 

    graph[0].push_back(Edge(1,2));
    graph[0].push_back(Edge(2,4));

    graph[1].push_back(Edge(2,1));
    graph[1].push_back(Edge(3,7));

    graph[2].push_back(Edge(4,3));

    graph[3].push_back(Edge(5,1));

    graph[4].push_back(Edge(3,2));
    graph[4].push_back(Edge(2,5));

    dijkstra(0,graph,V);

    return 0;
    
}