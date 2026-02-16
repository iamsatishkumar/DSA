/*Create a Graph(Adjacency List)
undirected, unWeighted*/
#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Graph{
    int v;
    list<int>* l;
public:
    Graph(int v){
        this->v=v;
        l=new list<int> [v];
        //int *arr;(here we used list<int>)
        //arr=new int[v];
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
};

int main(){
    Graph graph(5);
    //unWeighted, unDirected
    graph.addEdge(0,1);
    graph.addEdge(1,2);
    graph.addEdge(1,3);
    graph.addEdge(2,3);
    graph.addEdge(2,4);

    graph.print();
    return 0;
}