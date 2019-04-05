// problem link    https://atcoder.jp/contests/dp/tasks/dp_b



#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,i,k;
cin>>n>>k;
long long h[n+1],dp[n+1]={0},j;
h[0]=0;
for(i=1;i<=n;i++)
     cin>>h[i];
 dp[0]=0;
 dp[1]=0;
 for(i=2;i<=n;i++)
 {
  if(i==2)
        dp[2]=abs(h[i]-h[i-1])+dp[i-1];
  else{
      long long ans=INT_MAX;
        for(j=1;j<=k;j++)
        {   if(i-j>0)
            ans=min(ans,abs(h[i]-h[i-j])+dp[i-j]);
        }
    dp[i]=ans;
  }

 }
cout<<dp[n]<<endl;

}
