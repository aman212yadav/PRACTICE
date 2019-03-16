// https://hack.codingblocks.com/practice/p/346/409


#include<bits/stdc++.h>
using namespace std;
long long cost(string &s1,string &s2){
  int n=(int)s1.size(),m=(int)s2.size() ,i,j;
  int dp[n+1][m+1]={0};
  for(i=1;i<=m;i++)
      dp[0][i]=1+dp[0][i-1];
  for(i=1;i<=n;i++)
       dp[i][0]=1+dp[i-1][0];
  for(i=1;i<=n;i++)
     {for(j=1;j<=m;j++)
       if(s1[i]==s2[j])
          dp[i][j]=dp[i-1][j-1];
       else
          dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
     }
    return dp[n][m];

}
int main(){
string s,s1,s2;
cin>>s;
s1=" "+s;
cin>>s;
s2=" "+s;
cout<<cost(s1,s2)<<endl;

}
