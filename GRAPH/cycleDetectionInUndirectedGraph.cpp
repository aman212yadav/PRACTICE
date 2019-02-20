// cycle detection in undirected using BFS





#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph
{
    map<T,list<T> > g;
public:
    Graph() {}
    void addEdge(T a,T b,bool bidir=true)
    {
        g[a].push_back(b);
        if(bidir==true)
        {
            g[b].push_back(a);
        }
    }
    bool isCyclicBFS(T src){
     map<T,bool> visited;
     map<T,T> parent;
     queue< T > q;
     q.push(src);
     visited[src]=true;
     parent[src]=src;
     while(!q.empty()){
        T u=q.front();
          q.pop();
          for(auto v:g[u]){
            if(visited[v]==true && parent[u]!=v){
                return true;
            }
            else if(!visited[v]){
                visited[v]=true;
                parent[v]=u;
                q.push(v);
            }

          }
     }
     return false;


    }

};
int main()
{
    Graph<int >  g;
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(1,4);
    if(g.isCyclicBFS(1)){

        cout<<"Yes Cycle is present\n";
    }
    else
        cout<<"No Cycle is present\n";

}
