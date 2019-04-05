// problem link   https://atcoder.jp/contests/dp/tasks/dp_c


#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,i;
cin>>n;
long long key[n+1][3],dp[n+1][3]={0};
for(int i=1;i<=n;i++)
     cin>>key[i][0]>>key[i][1]>>key[i][2];

 for(i=1;i<=n;i++)
 {
     dp[i][0]=key[i][0]+max(dp[i-1][1],dp[i-1][2]);
      dp[i][1]=key[i][1]+max(dp[i-1][0],dp[i-1][2]);
       dp[i][2]=key[i][2]+max(dp[i-1][1],dp[i-1][0]);
 }
 cout<<max(dp[n][0],max(dp[n][1],dp[n][2]))<<endl;

}
