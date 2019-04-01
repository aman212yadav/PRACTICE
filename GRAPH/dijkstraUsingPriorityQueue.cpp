// shotest path from vertex 1 to all other vertex



#include<bits/stdc++.h>
using namespace std;
struct tiple{
	long long a,b,w;
};
int main(){
	int n,m,a,b,c,i;
	cin>>n>>m;
	vector< pair<long long,long long> > gr[n+1];
	vector<long long> cost(n+1,1e9);   
	for(i=0;i<m;i++){
		cin>>a>>b>>c;
		gr[a].push_back({b,c});
	}
	cost[1]=0;
	priority_queue< pair<long long,long long> ,vector< pair<long long,long long> >, greater< pair<long long,long long> > > pq;
	pq.push({0,1});
	while(!pq.empty()){
		 pair<long long ,long long > q=pq.top();
		 pq.pop();
		 int u=q.second;
		 for(auto v:gr[u]){
		 	if(cost[u]+v.first<cost[v]){
		 		cost[v]=cost[u]+v.first;
		 		pq.push({cost[v],v.second});
			 }
		 }
	}
  for(i=2;i<=n;i++)
    cout<<cost[i]<<" ";	
}
