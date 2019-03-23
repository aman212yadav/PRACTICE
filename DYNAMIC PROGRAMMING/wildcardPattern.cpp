// problem link  https://hack.codingblocks.com/practice/p/346/1058




#include<bits/stdc++.h>
using namespace std;
int main(){
string str,pattern;
int n,m,i,j;
cin>>str>>pattern;
n=(int)str.size();
m=(int)pattern.size();
bool dp[n+1][m+1];
dp[0][0]=true;
for(i=1;i<=m;i++)
{
    if( pattern[i-1]=='*' )
        dp[0][i]=dp[0][i-1];
    else
        dp[0][i]=false;
}
for(i=1;i<=n;i++)
    dp[i][0]=false;
for(i=1;i<=n;i++)
{
    for(j=1;j<=m;j++)
    {
        if(str[i-1]==pattern[j-1] || pattern[j-1]=='?' )
            dp[i][j]=dp[i-1][j-1];
        else if(pattern[j-1]=='*')
            dp[i][j]=dp[i][j-1]|dp[i-1][j];
        else
            dp[i][j]=false;
    }
}
cout<<dp[n][m]<<endl;
}
