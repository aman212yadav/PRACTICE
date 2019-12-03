#include<bits/stdc++.h>
using namespace std;
int ju[1000][1000];
int lg;
void dfs(vector<int> *gr,int *depth,int u,int par=-1){
   depth[u]=depth[par*(par!=-1)]+1;
   ju[0][u]=par;
   for(auto k: gr[u]){
      if(k==par){
      continue;
      }
      dfs(gr,depth,k,u);
   }

}
int walk(int i,int k){
     for(int j=0;(long long)(1<<j) <= k && i!=-1 ;j++){
        if((k&(1<<j))>0){
            i=ju[j][i];
        }
     }
     return i;
}
int lca(int i,int j,int *depth){
     if(depth[i]>depth[j]){
        i=walk(i,depth[i]-depth[j]);
     }
     if(depth[j]>depth[i]){
        j=walk(j,depth[j]-depth[i]);
     }
     if(i==j)
        return i;
     for(int k=lg;k>=0;k--){
        if(ju[k][i]!=ju[k][j]){
            i=ju[k][i];
            j=ju[k][j];
        }
     }
     return ju[0][i];

}
int main(){
int u,v,n,e;
cin>>n>>e;
vector<int> tr[n+1];
for(int i=0;i<e;i++){
   cin>>u>>v;
   tr[u].push_back(v);
   tr[v].push_back(u);
}
int depth[n+1]={0};
int logn=log2(n)+1;
for(int i=0;i<=logn+1;i++){
 for(int j=0;j<=n;j++)
      ju[i][j]=-1;
}
depth[1]=1;
dfs(tr,depth,1);
for(int k=1;k<=logn;k++){
    for(int i=1;i<=n;i++){
        int mid=ju[k-1][i];
        if(mid!=-1){
            ju[k][i]=ju[k-1][mid];
        }
    }
}
lg=logn;

}
