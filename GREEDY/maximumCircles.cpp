// problem link   https://hack.codingblocks.com/practice/p/368/563



#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,c,r,i;
    cin>>n;
    pair<int,int> arr[n];
    for(i=0; i<n; i++)
    {
        cin>>c>>r;
        arr[i].first=c+r;
        arr[i].second=c-r;
    }
    sort(arr,arr+n);
    int co=1,fi=arr[0].first;

    for(i=1; i<n; i++)
    {
        if(arr[i].second>=fi)
        {
            fi=arr[i].first;
            co++;
        }

    }
     cout<<n-co<<endl;

}
