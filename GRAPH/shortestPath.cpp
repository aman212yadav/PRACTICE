// problem link  https://hack.codingblocks.com/practice/p/371/763

#include<bits/stdc++.h>
using namespace std;

int main(){
long long q,n,m,i,u,s,v;
cin>>q;
while(q--){
    cin>>n>>m;
    int visited[n+1]={0};
    vector<int> gr[n+1];
    for(i=0;i<m;i++){
        cin>>u>>v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }
    cin>>s;
    queue<int> t;
    int arr[n+1]={0};
    t.push(s);
    visited[s]=1;
    while(!t.empty()){
         u=t.front();
         t.pop();
        for(auto v: gr[u]){
            if(visited[v]==0){
                visited[v]=1;
                arr[v]=arr[u]+6;
                t.push(v);
            }

        }
    }
    for(i=1;i<=n;i++)
    {
        if(i==s)
            continue;
        if(visited[i]==0)
            cout<<"-1 ";
        else
            cout<<arr[i]<<" ";

    }
    cout<<endl;
}

}
