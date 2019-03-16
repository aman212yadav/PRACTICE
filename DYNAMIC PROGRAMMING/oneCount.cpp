//problem link https://hack.codingblocks.com/contests/c/587/916

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
    cin>>n>>k;
    int arr[n+1];
    for(i=1; i<=n; i++)
        cin>>arr[i];
    int dp[n]= {0};
    dp[0]=0;
    for(int i=1; i<=n; i++)
        dp[i]=dp[i-1]+(arr[i]==0);
    int s=0,e=n,m,ans=0, i1=0;
    while(s<=e)
    {
        m=(s+e)/2;
        bool b=false;
        for(i=1; i+m-1<=n; i++)
        {


            if(dp[i+m-1]-dp[i-1]<=k)
                {
                    b=true;
                    break;
                }

        }

        if(b)
        {
                ans=m;
                i1=i;
                s=m+1;
        }
        else
        {
            e=m-1;
        }


    }
    cout<<ans<<"\n";
    for(i=1; i<=n; i++)
    {
        if(i1<=i && i <i1+ans)
            cout<<1<<" ";
        else
            cout<<arr[i]<<" ";
    }
}
