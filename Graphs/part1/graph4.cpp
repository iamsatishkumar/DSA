/*Depth First Search*/
#include<iostream>
#include<list>
#include<vector>
#include<queue>
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

    void print(){
        for(int u=0; u<v; u++){
            cout<<u<<" : ";
            for(auto v : l[u]){
                cout<<v<<" ";
            }
            cout<<endl;
        }
    }
    //BFS
    void bfs(){
        vector<bool> vis(v,false);
        queue<int> q;
        q.push(0);
        vis[0]=true;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            cout<<curr<<" ";
            for(auto v : l[curr]){
                if(!vis[v]){
                    vis[v]=true;
                    q.push(v);
                }
            }
        }
        cout<<endl;
    }

    //dfs
    void dfsHelper(int u,vector<bool> &visited){
        visited[u]=true;
        cout<<u<<" ";

        list<int> neighbours=l[u];
        for(auto v : neighbours){
            if(!visited[v]){
                dfsHelper(v,visited);
            }
        }
    }

    void dfs(){
        vector<bool> visited(7,false);
        dfsHelper(0,visited);
        cout<<endl;
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

    graph.print();
    graph.bfs();

    graph.dfs();
    return 0;


}