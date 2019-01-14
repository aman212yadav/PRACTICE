// problem link https://hack.codingblocks.com/practice/p/369/215

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,k,target;
    cin>>n;
    long long arr[n];
    for(i=0;i<n;i++)
         cin>>arr[i];
         sort(arr,arr+n);
         cin>>target;
    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
                if(arr[i]+arr[j]+arr[k]==target)
                    cout<<arr[i]<<", "<<arr[j]<<" and "<<arr[k]<<endl;
        }
    }
}
