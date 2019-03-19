// https://hack.codingblocks.com/practice/p/371/771



#include<bits/stdc++.h>
using namespace std;
class graph{
int V;
list< pair<int,int> > *l;
public:
     graph(int n){
      V=n;
      l=new list< pair<int,int> >[n+1];
     }
     int dfsHelper(int u,int *visited,int *child,long long  &ans){
         visited[u]=1;
         child[u]=1;
         for(auto neighbour : l[u]){

            int v=neighbour.first;
          if(!visited[v]){
            int cost=neighbour.second;
            int s=dfsHelper(v,visited,child,ans);
             child[u]+=s;
             ans+=2*min(s,V-s)*cost;
          }
         }
        return child[u];
     }
     void addEdge(int a,int b,int cost){
       l[a].push_back(make_pair(b,cost));
       l[b].push_back(make_pair(a,cost));
     }
     long long   dfs(){
     int *visited=new int[V+1]{0};
     int *child=new int[V+1]{0};
     long long ans=0;
     dfsHelper(1,visited,child,ans);
     return ans;

     }

};
int main(){
int t,n,i,a,b,c,j;
cin>>t;
for(j=1;j<=t;j++){
    cin>>n;
    graph g(n);
    for(i=0;i<n-1;i++)
    {cin>>a>>b>>c;
     g.addEdge(a,b,c);
    }
    cout<<"Case #"<<j<<": "<<g.dfs()<<endl;


    }
}
