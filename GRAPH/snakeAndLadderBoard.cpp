//problem link  https://hack.codingblocks.com/practice/p/371/1276


#include<bits/stdc++.h>
using namespace std;
int bfsMin(int *jump,int start,int end){
  int visited[end+1]={0};
  int dist[100];
  queue<int> q;
  q.push(start);
  for(int i=0;i<100;i++) dist[i]=INT_MAX;
  visited[start]=1;
  dist[start]=0;
  while(!q.empty()){
    int s=q.front();
      if(s==end)
      return dist[end];
       q.pop();
     for(int i=1;i<=6;i++)
       {
        int v=s+i+jump[s+i];
         if(v>=1 && v<=end && visited[v]==0){
           dist[v]=1+dist[s];
           visited[v]=1;
           q.push(v);
         }
       }
  }
  return dist[end];

}
int main() {
	int a,b,t,n,l,s,i;
	cin>>t;
	while(t--){
	  int jump[100]={0};
	  cin>>n>>l>>s;
	  for(i=0;i<l+s;i++){
	    cin>>a>>b;
	    jump[a]=b-a;
	  }
	 
	  cout<<bfsMin(jump,0,n)<<endl;
	}
}
