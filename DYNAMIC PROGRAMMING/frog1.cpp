// problem link  https://atcoder.jp/contests/dp/tasks/dp_a


#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,i;
cin>>n;
long long h[n+1],dp[n+1]={0};
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
    dp[i]=min(abs(h[i]-h[i-1])+dp[i-1],abs(h[i]-h[i-2])+dp[i-2]);
  }

 }
cout<<dp[n]<<endl;

}
