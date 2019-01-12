// HELP RAMU PROBLEM link https://hack.codingblocks.com/contests/c/101/104

#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,q,x,y,f,t,i,j;
    cin>>n;
    vector< pair<long long,long long > > v(n);
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        v[i]=make_pair(x,y);
    }
    cin>>q;
    while(q--)
    {
        cin>>f>>t;
        long long ma=0;
        for(i=f-1;i<t;i++)
        {
            for(j=i+1;j<t;j++)
            {
                ma=max(ma,(v[i].first-v[j].first)*(v[i].first-v[j].first)+(v[i].second-v[j].second)*(v[i].second-v[j].second));
            }
        }
        cout<<ma<<"\n";
    }

}
