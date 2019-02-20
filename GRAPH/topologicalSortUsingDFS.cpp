// given generic directed graph print topological graph



#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph
{
    map<T,list<T> > g;
public:
    Graph() {}
    void addGraph(T a,T b,bool bidir=false)
    {
        g[a].push_back(b);
        if(bidir==true)
        {
            g[b].push_back(a);
        }
    }
    void dfsTopologicalUtil(map<T,bool> &visited,T start,list<T> &l)
    {
        visited[start]=true;
        for(auto neighbour:g[start])
        {
            if(visited[neighbour]==false)
            {
                dfsTopologicalUtil(visited,neighbour,l);

            }
        }
        l.push_front(start);
    }
    void dfsTopological()
    {
        map<T,bool> visited;
        list<T> l;
        for(auto edges:g)
        {
            if(!visited[edges.first])
            {
                dfsTopologicalUtil(visited,edges.first,l);
            }
        }
        for(auto order:l)
        {
            cout<<order<<" - > ";

        }
    }
};
int main()
{
    Graph<string>  g;
    g.addGraph("english","programming");
    g.addGraph("math","programming");
    g.addGraph("programming","python");
    g.addGraph("python","web development");
    g.dfsTopological();


}
