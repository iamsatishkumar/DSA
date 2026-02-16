/* "Topological Sorting "
using DFS (here stack is used)*/
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
    }

    void print(){
        for(int i=0; i<v; i++){
            cout<<i<<" : ";
            for(auto j : l[i]){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
    void topologicalHelper(int src,vector<bool> &vis,stack<int> &s){
        vis[src]=true;
        
        list<int> neighbour=l[src];

        for(auto v : neighbour){
            if(!vis[v]){
                topologicalHelper(v,vis,s);
            }
        }
        s.push(src);
    }

    void topologicalSorting(){
        vector<bool> vis(v,false);
        stack<int> s;
        for(int i=0; i<v; i++){
            if(!vis[v]){
                topologicalHelper(i,vis,s);
            }
            
        }
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        } 
    }
};
int main(){
    Graph graph(6);

    graph.addEdge(5,0);
    graph.addEdge(5,2);
    graph.addEdge(2,3);
    graph.addEdge(3,1);
    graph.addEdge(4,0);
    graph.addEdge(4,0);

    graph.print();

    graph.topologicalSorting();

    return 0;
}