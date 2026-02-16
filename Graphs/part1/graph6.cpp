/*"HasPath" Problem
tell if path exists from "src" to "dest" 
using bfs*/
#include<bits/stdc++.h>
using namespace std;
class Graph{
public:
    int v;
    list<int>* l;

    Graph(int v){
        this->v=v;
        l=new list<int> [v];
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    bool hasPath(int src,int dest){
        vector<bool> vis(v,false);
        queue<int> q;
        q.push(src);
        vis[src]=true;

        while(!q.empty()){
            int u=q.front();
            q.pop();
            if(u == dest){
                return true;
            }
            for(auto v : l[u]){ //list<int> neighbours=l[u]
                if(!vis[v]){
                    vis[v]=true;
                    q.push(v);
                }
            }
        }
        return false;
    }
};

int main(){
    Graph graph(7);

    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,3);
    graph.addEdge(2,4);
    graph.addEdge(3,5);
    graph.addEdge(3,4);
    graph.addEdge(4,5);
    graph.addEdge(5,6);

    cout<<graph.hasPath(0,4);
    return 0;
}