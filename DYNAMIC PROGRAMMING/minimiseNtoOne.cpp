// problem link  https://www.geeksforgeeks.org/minimum-steps-minimize-n-per-given-condition/

#include<bits/stdc++.h>
using namespace std;
long long getMinSteps(int n)
{
    long long dp[n+1];
    fill(dp,dp+n+1,-1);
    dp[0]=dp[1]=0;
    dp[2]=dp[3]=1;
    for(int i=4; i<=n; i++)
    {
        long long  res=1+dp[i-1];
        if(i%2==0)
            res=min(res,1+dp[i/2]);
        if(i%3==0)
            res=min(res,1+dp[i/3]);

        dp[i]=res;

    }

    return dp[n];

}
int main()
{
    long long n;
    cin>>n;
    cout<<getMinSteps(n)<<endl;

}
