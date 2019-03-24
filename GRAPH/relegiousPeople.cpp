//  problem link https://hack.codingblocks.com/practice/p/371/1170


#include<bits/stdc++.h>
using namespace std;
long long  a,b;
long long bfsCost(int u,int *visited,vector<int> *gr){

   visited[u]=1;
   long long co=a;
   queue< int > q;
   q.push(u);
   while(!q.empty()){
    int temp=q.front();
    q.pop();
    for(auto v: gr[temp]){

        if(!visited[v]){
            visited[v]=1;
            q.push(v);
            co+=min(a,b);

        }
    }

   }
   return co;
}
int main(){
int t,n,m,u,v,i;
cin>>t;
while(t--){
    cin>>n>>m>>a>>b;
    vector<int> gr[n+1];
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    int visited[n+1]={0};
    long long cost=0;
    for(i=1;i<=n;i++){
        if(!visited[i])
        {
            cost+=bfsCost(i,visited,gr);
        }

    }
    cout<<cost<<endl;


}
}
