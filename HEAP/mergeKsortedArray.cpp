// problem link   https://hack.codingblocks.com/practice/p/378/886



#include<bits/stdc++.h>
using namespace std;
struct a{
  int d,cl,idx;
  a(int d1,int c1,int id1){
    d=d1;
    cl=c1;
    idx=id1;
  }
};
class mycmp{
  public:
  bool operator()(a p1,a p2){
       return p1.d > p2.d;
  }
};
int main(){
  
  int k,n,i,j;
  cin>>k>>n;
  priority_queue< a ,vector< a > ,mycmp > pq;
  vector<int> v[k];
  for(i=0;i<k;i++){
    v[i]=vector<int>(n+1);
    for(j=0;j<n;j++)
      cin>>v[i][j];
      v[i][j]=INT_MAX;
  }
  for(i=0;i<k;i++){
    pq.push({v[i][0],i,0});
  }
  while(pq.top().d!=INT_MAX){
    cout<<pq.top().d<<" ";
    int cl=pq.top().cl;
    int j=pq.top().idx+1;
    pq.pop();
    pq.push({v[cl][j],cl,j});
    
  }
  
}
