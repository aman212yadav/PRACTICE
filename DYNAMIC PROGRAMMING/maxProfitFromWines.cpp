// https://www.geeksforgeeks.org/maximum-profit-sale-wines/


#include<bits/stdc++.h>
using namespace std;
int getMaxProfit(int *arr,int n)
{
    int wineCost[n+1][n+1],i,year=n;
    memset(wineCost,-1,sizeof(wineCost));
    for(i=1; i<=n; i++)
    {
        wineCost[i][i]=arr[i]*year;
    }
    year--;
    for(int len=2; len<=n; len++)
    {
        int s=1;
        int e=n-s+1;
        while(s<=e)
        {
            int ee=s+len-1;
            wineCost[s][ee]=max(wineCost[s][ee-1]+arr[ee]*year,wineCost[s+1][ee]+arr[s]*year);
            s++;
        }
        year--;
    }
    return wineCost[1][n];
}
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1; i<=n; i++)
        cin>>arr[i];
    cout<<getMaxProfit(arr,n);

}
