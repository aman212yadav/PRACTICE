//


#include<bits/stdc++.h>
using namespace std;
class Graph{
    int V;
    list<int> *l;
    public:
    Graph(int V){
        this->V=V;
        l=new list<int>[V]; 
    }
    void addEdge(int a,int b,bool bidir=true){
        l[a].push_back(b);
        if(bidir)
        l[b].push_back(a);
    }
    void printAdjList(){
        
        for(int i=0;i<V;i++){
            cout<<i<<" -> ";
            for(int k:l[i])
            cout<<k<<" -> ";
            cout<<endl;
        }
        
    }
};
int main(){
    
   Graph g(6);
   g.addEdge(0,1);
   g.addEdge(0,3);
   g.addEdge(1,2);
   g.addEdge(2,3);
   g.addEdge(2,5);
   g.addEdge(3,4);
   g.printAdjList();
    
}
