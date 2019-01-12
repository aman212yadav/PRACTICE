// Rain Water Harvesting problem link https://hack.codingblocks.com/practice/p/369/512


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t,i;
    
        cin>>n;
        long long arr[n];
        for(i=0;i<n;i++)cin>>arr[i];
        long long left[n];
        left[0]=arr[0];
        long long right[n];
        right[n-1]=arr[n-1];
        for(i=1;i<n-1;i++)
           left[i]=max(arr[i],left[i-1]);
           for(i=n-2;i>=0;i--)
           right[i]=max(arr[i],right[i+1]);
           long long ans=0;
           for(i=0;i<n;i++)
           ans+=(min(left[i],right[i])-arr[i]);
           cout<<ans<<endl;
    
}
