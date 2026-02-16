/*"Bipartite Graph"
no edge connects vertices of same set

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
        l[v].push_back(u);
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

    bool isBipartiteHelper(int src,vector<bool> &vis,vector<int> &color){
        queue<int> q;
        q.push(src);
        vis[src]=true;
        color[src]=0;

        while(!q.empty()){
            int curr=q.front();
            q.pop();
            list<int> neighbours=l[curr];
            for(auto v : neighbours){
                if(!vis[v]){
                    vis[v]=true;
                    q.push(v);
                    if(color[curr]==0){
                        color[v]=1;
                    }else{
                        color[v]=0;
                    }
                }else{
                    if(color[curr]==color[v]){
                        return false;
                    }
                }
            }
        }
        return true;
    }

    bool isBipartite(){
        vector<bool> vis(v,false);
        vector<int> color(v,-1); // 0 - blue , 1 - white
        for(int i=0; i<v; i++){
            if(!vis[i]){
                if(!(isBipartiteHelper(i,vis,color))){//if disconnected graph and G1 is bipartite & g2 is nonBipartite that's y this condition
                    return false;
                }
            }
        }
        return true;
    }
};
int main(){
    Graph graph(5);

    graph.addEdge(0,1);
    //graph.addEdge(0,3); //it will make non bipartite
    graph.addEdge(1,3);
    graph.addEdge(3,2);
    graph.addEdge(2,0);

    //graph.print();

    cout<<graph.isBipartite();


    return 0;
}