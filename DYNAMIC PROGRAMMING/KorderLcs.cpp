// problem link  https://www.hackerearth.com/problem/algorithm/mancunian-and-k-ordered-lcs-e6a4b8c6/



#include<bits/stdc++.h>
using namespace std;
long long dp[2001][2001][6];
long long a[2001];
long long b[2001];
long long lcs(int i,int j,int n,int m,int k){
   if(i==n || j==m)
      return 0;
      if(dp[i][j][k]!=-1)
        return dp[i][j][k];
    long long ans=0;
    if(a[i]==b[j])
      ans=1+lcs(i+1,j+1,n,m,k);
    else{
         if(k>0)
         ans=max(ans,1+lcs(i+1,j+1,n,m,k-1));
         ans=max(ans,lcs(i+1,j,n,m,k));
         ans=max(ans,lcs(i,j+1,n,m,k));
    }
    dp[i][j][k]=ans;
    return dp[i][j][k];


}
int main(){
long long n,m,k;
cin>>n>>m>>k;
memset(dp,-1,sizeof(dp));
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<m;i++)cin>>b[i];
cout<<lcs(0,0,n,m,k)<<endl;

}
