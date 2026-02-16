/*Breadth First Traversal (BFS)*/
#include<iostream>
#include<list>
#include<queue>
#include<vector>
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
            list<int> neighbours=l[u];
            cout<<u<<" : ";
            for(auto v : neighbours){
                cout<<v<<" ";
            }
            cout<<endl;
        }
    }
    //BFS Traversal
    void bfs(){ //O(V+E)
        vector<bool> visited(v,false);
        queue<int> q;
        q.push(0);
        visited[0]=true;

        while(!q.empty()){
            int u=q.front(); //curr vertex
            q.pop();
            cout<<u<<" ";
            list<int> neighbours=l[u]; // u ----- v
            for(auto v : neighbours){
                if(!visited[v]){
                    visited[v]=true;
                    q.push(v);
                }
            }
        }
        cout<<endl;
    }
};
int main(){
    Graph graph(7);

    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,3);
    graph.addEdge(2,4);
    graph.addEdge(3,4);
    graph.addEdge(3,5);
    graph.addEdge(4,5);
    graph.addEdge(5,6);

    graph.print();
    cout<<"-----------  bfs  -----------\n";
    graph.bfs();

    return 0;
}