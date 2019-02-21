#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Graph{
    map<T,list< pair<T,int> > > gr;
public:
    void addEdge(T u,T v,int dist,bool bidir=true){
      gr[u].push_back(make_pair(v,dist));
      if(bidir)
        gr[v].push_back(make_pair(u,dist));
    }
    void dijkastra(T src){
       unordered_map<T,int> dist;
       for(auto i:gr){
        dist[i.first]=INT_MAX;
       }
       dist[src]=0;
       set<pair<int,T> > s;
       s.insert( make_pair(0,src));
       while(!s.empty()){
         auto p=*(s.begin());
         T node=p.second;
         int nodeDist=p.first;
         s.erase(s.begin());
         for(auto v: gr[node]){
            if(nodeDist+v.second < dist[v.first]){
                auto f=s.find(make_pair(dist[v.first],v.first));
                if(f!=s.end()){
                    s.erase(f);
                }
                dist[v.first]=nodeDist+v.second;
                s.insert(make_pair(dist[v.first],v.first));
            }


         }
       }
      for(auto k:dist){
        cout<<"distance of "<<k.first<<" "<<k.second<<endl;
      }



    }


};
int main(){

Graph<string> india;
    india.addEdge("Amritsar","Delhi",1);
    india.addEdge("Amritsar","Jaipur",4);
    india.addEdge("Jaipur","Delhi",2);
    india.addEdge("Jaipur","Mumbai",8);
    india.addEdge("Bhopal","Agra",2);
    india.addEdge("Mumbai","Bhopal",3);
    india.addEdge("Agra","Delhi",1);
    //india.printAdj();
    india. dijkastra("Amritsar");
}
