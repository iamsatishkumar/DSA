/*  " Kahn's Algorithm " 
Topological sort using BFS (here queue is used as we know BFS is a level order traversal)*/
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
    //calculaing in-degree
    void calIndegree(vector<int> &indegree){
        for(int u=0; u<v; u++){
            list<int> neighbours=l[u];
            for(auto V : neighbours){ // u --> v
                indegree[V]++;
            }
        }
        
    }


    void topologicalSort2(){ // Kahn's Algorithm
        vector<int> indegree(v,0);
        calIndegree(indegree); // it will give us in-degree of nodes

        queue<int> q;
        // nodes with 0 indegree -> starting point of our BFS
        for(int i=0; i<v; i++){
            if(indegree[i]==0){ // whose indegree is 0 push in queue
                q.push(i);
            }
        }

        while(!q.empty()){
            int curr=q.front();
            q.pop();
            cout<<curr<<" ";

            for(auto neighbours : l[curr]){
                indegree[neighbours]--; // (v --> v) reduced indegree of of v by 1 
                if(indegree[neighbours]==0){ //no pending dependencies
                    q.push(neighbours);
                }
            }
        }
        cout<<endl;
    }
};
int main(){
    Graph graph(6);

    graph.addEdge(2,3);
    graph.addEdge(3,1);

    graph.addEdge(4,0);
    graph.addEdge(4,1);

    graph.addEdge(5,0);
    graph.addEdge(5,2);

    
    graph.topologicalSort2();



return 0;
}