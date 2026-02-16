/*Cycle Detection
"Directed Graph - DFS(method)"*/
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

    bool dirCycleHelper(int src,vector<bool> &vis,vector<bool> &recPath){
        vis[src]=true;
        recPath[src]=true;

        list<int> neighbours=l[src];
        for(auto v : neighbours){
            if(!vis[v]){
                if(dirCycleHelper(v,vis,recPath)){
                    return true;
                }
            }else{
                if(recPath[v]){
                    return true;
                }
            }
        }
        recPath[v]=false;//backtracking
        return false;
    }
    
    bool isCycleDir(){
        vector<bool> vis(v,false);
        vector<bool> recPath(v,false);

        for(int i=0; i<v; i++){
            if(!vis[v]){
                if(dirCycleHelper(i,vis,recPath)){
                    return true;
                }
            }
        }
        return false;
    } 
};
int main(){
    Graph graph(4);

    graph.addEdge(0,2);
    graph.addEdge(2,3);
    graph.addEdge(3,0);
    graph.addEdge(1,0);

    graph.print();
    cout<<graph.isCycleDir();
    return 0;
}