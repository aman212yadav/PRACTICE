#include<bits/stdc++.h>
using namespace std;
class Graph{
  map<int, list< pair<int,int> > > m;
  public:
  void addEdge(int a,int b,int weight)
     {
       m[a].push_back(make_pair(b,weight));
       m[b].push_back(make_pair(a,weight));
     }
   void dijkstraAlgo(int source)
   {
       map<int,int> distance;
       for(auto j:m)
       {
           distance[j.first]=INT_MAX;
       }
       distance[source]=0;

       set< pair<int,int > > s;
       s.insert(make_pair(0,source));
       while(!s.empty())
       {

           pair<int,int> p= *s.begin();
           s.erase(s.begin());
           for(auto child:m[p.second])
           {

               if(p.first+child.second < distance[child.first])
               {
                   auto f=s.find(make_pair(distance[child.first],child.first));
                    if(f!=s.end())
                    {
                        s.erase(f);
                    }
                    s.insert(make_pair(p.first+child.second,child.first));
                    distance[child.first]=p.first+child.second;

               }
           }
       }

       for(auto k:distance)
       {
          cout<<"node "<<k.second<<" is located at distance "<<k.first<<endl;

       }
   }

};
int main()
{
    Graph g;
    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);
    g.dijkstraAlgo(0);
}
