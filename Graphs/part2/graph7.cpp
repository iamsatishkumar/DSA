/*Disconnected Components*/
#include<bits/stdc++.h>
using namespace std;
class Graph{
    int v;
    list<int>* l;
public:
    Graph(int v){
        this->v=v;
        l=new list<int> [v];
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    //printing graph
    void print(){
        for(int i=0; i<v; i++){
            cout<<i<<" : ";
            for(auto j : l[i]){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
    //graph traversal
    //bfs
    void bfsHelper(int u,vector<bool> &vis){
        queue<int> q;
        q.push(u);
        vis[u]=true;

        while(!q.empty()){
            int curr=q.front(); // u
            q.pop();
            cout<<curr<<" ";
            for(auto v : l[curr]){ //list<int> neighbours=l[curr]
                if(!vis[v]){
                    vis[v]=true;
                    q.push(v);
                }
            }
        }
    }
    void bfs(){
        vector<bool> vis(v,false);

        for(int i=0; i<v; i++){
            if(!vis[i]){
                bfsHelper(i,vis);
            }
            
        }
        cout<<endl;
    }

    //dfs
    void dfsHelper(int u,vector<bool> &vis){
        vis[u]=true;
        cout<<u<<" ";
        for(auto v : l[u]){
            if(!vis[v]){
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
};
int main(){
    Graph graph(10);

    graph.addEdge(0,2);
    graph.addEdge(2,5);
    graph.addEdge(1,6);
    graph.addEdge(6,4);
    graph.addEdge(4,3);
    graph.addEdge(4,9);
    graph.addEdge(3,7);
    graph.addEdge(3,8);

    graph.print();
    graph.bfs();
    graph.dfs();

    return 0;

}