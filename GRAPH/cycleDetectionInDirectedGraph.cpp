// cycle detection in Directed Graph


#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph
{
    map<T,list<T> > g;
public:
    Graph() {}
    void addEdge(T a,T b,bool bidir=false)
    {
        g[a].push_back(b);
        if(bidir==true)
        {
            g[b].push_back(a);
        }
    }
  bool isCyclicDFSutil(map<T,bool> &instack,map<T,bool> &visited,T u){
      instack[u]=true;

      visited[u]=true;
      for(auto v:g[u]){
      if( instack[v]||(!visited[v] &&  isCyclicDFSutil(instack,visited,v))){
         return true;
      }
      }
      instack[u]=false;
      return false;
  }
  bool isCyclicDFS(){
    map<T,bool> instack;
    map<T,bool> visited;
    for(auto i:g){
            T u = i.first;
        if(!visited[u] && isCyclicDFSutil(instack,visited,u)){
            return true;
        }

    }
    return false;

  }

};
int main()
{
    Graph<int >  g;
    g.addEdge(0,2);
    g.addEdge(0,1);
    g.addEdge(3,0);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g.addEdge(4,5);
    g.addEdge(1,5);
    if(g.isCyclicDFS()){

        cout<<"Yes Cycle is present\n";
    }
    else
        cout<<"No Cycle is present\n";

}
