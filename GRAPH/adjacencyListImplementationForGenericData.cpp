

#include<bits/stdc++.h>
using namespace std;
template<typename t>
class Graph{
    int V;
    map< t,list<t> > l;
    public:
    Graph(int V){
        this->V=V;
    }
    void addEdge(t a,t b,bool bidir=true){
        l[a].push_back(b);
        if(bidir)
        l[b].push_back(a);
    }
    void printAdjList(){
        
        for(auto source:l){
            cout<<source.first<<" -> ";
            for(auto vertex:source.second)
            cout<<vertex<<" , ";
            cout<<endl;
            
        }
        
    }
};
int main(){
    
   Graph<string> g(6);
   g.addEdge("Aman","Neha");
   g.addEdge("Aman","Anita");
   g.addEdge("Neha","Anita");
   g.addEdge("Anita","Kunal");
  
   g.printAdjList();
    
}
