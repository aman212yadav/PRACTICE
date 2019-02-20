// topical sort using bfs


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
    void bfsTopological()
    {
        map<T,bool> visited;
        map<T,int> indegree;
        queue<T> q;
        for(auto i:g){
            auto first=i.first;
            indegree[first]=0;
        }
        for(auto i:g)
        {
            auto u=i.first;
            for(auto v: g[u])
            {
                indegree[v]++;
            }
        }
        for(auto i:indegree)
        {
            if(i.second==0)
            {
                q.push(i.first);
                visited[i.first]=true;
            }
        }
        while(!q.empty())
        {
            T u=q.front();
            cout<<u<<" - > ";
            q.pop();
            for( auto v:g[u])
            {
                indegree[v]--;
                if(indegree[v]==0 && !visited[v])
                {
                    q.push(v);
                    visited[v]=true;
                }
            }
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
    g.bfsTopological();


}
