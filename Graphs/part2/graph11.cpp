/* "All Paths" Problem
print all paths from "src" to "dest" for a directed graph
*/
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
    void pathHelper(int src,int dest,vector<bool> &vis,string &path){ //)(V + E)
        if(src==dest){
            cout<<path<<dest<<endl;
            return;
        }

        vis[src]=true;
        path +=to_string(src);

        for(auto  v : l[src]){
            if(!vis[v]){
                pathHelper(v,dest,vis,path);
            }
        }
        path=path.substr(0,path.size()-1);//(start,end-1) then removes end from string
        vis[src]=false;
    
    }
    void printAllPath(int src,int dest){
        vector<bool> vis(v,false);
        string path="";
        pathHelper(src,dest,vis,path);

    }
};

int main(){
    Graph graph(7);

    graph.addEdge(0,3);
    graph.addEdge(3,1);
    graph.addEdge(5,0);
    graph.addEdge(5,2);
    graph.addEdge(2,3);
    graph.addEdge(4,0);
    graph.addEdge(4,1);

    //graph.print();

    graph.printAllPath(5,1);

    return 0;
}