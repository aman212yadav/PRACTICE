// https://hack.codingblocks.com/practice/p/346/922



#include<bits/stdc++.h>
using namespace std;
int main(){

int n,s,i,j;
cin>>n>>s;
int sizee[n+1],cost[n+1];
for(i=1;i<=n;i++)
     cin>>sizee[i];
for(i=1;i<=n;i++)
     cin>>cost[i];

long long dp[n+1][s+1];
  for(i=0;i<=s;i++)
    dp[0][i]=0;
  for(i=0;i<=n;i++)
     dp[i][0]=0;
  for(i=1;i<=n;i++)
  {
      for(j=1;j<=s;j++)
      {
          dp[i][j]=dp[i-1][j];
          if(j-sizee[i]>=0)
            dp[i][j]=max(dp[i][j],cost[i]+dp[i][j-sizee[i]]);
      }
  }
  cout<<dp[n][s];

}
