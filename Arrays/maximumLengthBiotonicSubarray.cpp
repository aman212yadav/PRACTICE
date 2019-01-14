//problem link https://hack.codingblocks.com/practice/p/369/1289
#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t,n,i;
cin>>t;
while(t--)
{
    cin>>n;
    int arr[n];
    int brr[n];
    int crr[n];
    for(i=0;i<n;i++)cin>>arr[i];
    brr[0]=1;
    crr[n-1]=1;
    for(i=1;i<n;i++)
        brr[i]=(arr[i]>=arr[i-1]?brr[i-1]+1:1);
    for(i=n-2;i>=0;i--)
         crr[i]=(arr[i]>=arr[i+1]?crr[i+1]+1:1);
    long long ma=1;
    for(i=0;i<n;i++)
    {if(brr[i]+crr[i]-1 > ma)
       ma=brr[i]+crr[i]-1;

    }
    cout<<ma<<endl;
}

}
