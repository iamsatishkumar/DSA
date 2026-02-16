/*Create a Graph(Adjacency List)
undirected, Weighted*/
#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Graph{
    int v;
    list<pair<int,int>>* l;
public:
    Graph(int v){
        this->v=v;
        l=new list<pair<int,int>> [v];
        //int *arr;(here we used list<int>)
        //arr=new int[v];
    }

    void addEdge(int u,int v,int w){
        l[u].push_back(make_pair(v,w));
        l[v].push_back(make_pair(u,w));
    }

    void print(){
        for(int u=0; u<v; u++){
            list<pair<int,int>> neighbours=l[u];
            cout<<u<<" : ";
            for(auto v : neighbours){
                cout<<"( "<<v.first<<","<<v.second<<" )";
            }
            cout<<endl;

        }
    }
};

int main(){
    Graph graph(5);
    //Weighted, unDirected
    graph.addEdge(0,1,5);
    graph.addEdge(1,2,1);
    graph.addEdge(1,3,3);
    graph.addEdge(2,3,1);
    graph.addEdge(2,4,2);

    graph.print();
    return 0;
}