/*Cycle Detection
"Undirected Graph - DFS(method)"*/
#include<bits/stdc++.h>
using namespace std;
class Graph{
    list<int>* l;
    int v;
public:
    Graph(int v){
        this->v=v;
        l=new list<int> [v];
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print(){
        for(int u=0; u<v; u++){
            cout<<u<<" : ";
            for(auto v : l[u]){
                cout<<v<<" ";
            }
            cout<<endl;
        }
    }
    
    void dfsHelper(int u,vector<bool> &vis){
        vis[u]=true;
        cout<<u<<" ";
        for(auto v : l[u]){
            if(!vis[v]){
                vis[v]=true;
                dfsHelper(v,vis);
            }
        }
    }
    void dfs(){
        vector<bool> vis(v,false);
        for(int i=0; i<v; i++){
            if(!vis[i]){
                dfsHelper(i,vis);
            }
        }
        cout<<endl;
    }

    bool undirCycleHelper(int src,int parent,vector<bool> &vis){ //O(v+E)
        vis[src]=true;
        list<int> neighbours=l[src];

        for(auto v : neighbours){ //list<int> neighbours=l[parent]
            if(!vis[v]){
                vis[v]=true;
                if(undirCycleHelper(v,src,vis)){//return stack
                    return true;
                }
            }else{
                if(v != parent){ //cycle condition
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycleUndir(){
        vector<bool> vis(v,false);

        for(int i=0; i<v; i++){
            if(!vis[v]){
                if(undirCycleHelper(0,-1,vis)){
                    return true;
                }
            }
        }
        return false;
    }
};
int main(){
    Graph graph(5);

    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(0,3);
    graph.addEdge(1,2);
    graph.addEdge(3,4);

    graph.print();
    graph.dfs();

    cout<<graph.isCycleUndir();


    return 0;

}