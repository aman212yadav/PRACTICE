//  https://www.geeksforgeeks.org/cutting-a-rod-dp-13/

#include<bits/stdc++.h>
using namespace std;
int getMaxProfit(int *arr,int n)
{
    int dp[n+1]= {};
    for(int i=1; i<=n; i++)
    {

        for(int cut=1; cut<=i; cut++)
            dp[i]=max(dp[i],arr[cut]+dp[i-cut]);
    }
    return dp[n];
}

int main()
{
    int n,i;
    cin>>n;
    int arr[n+1];
    for(i=1; i<=n; i++)
        cin>>arr[i];
    cout<<getMaxProfit(arr,n)<<endl;
}
