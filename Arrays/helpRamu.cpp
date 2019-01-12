// HELP RAMU PROBLEM link https://hack.codingblocks.com/contests/c/101/104

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,c1,c2,c3,c4,i;
    cin>>t;
    while(t--)
    {
         cin>>c1>>c2>>c3>>c4;
        cin>>n>>m;
        int ric[n];
        int cab[m];
        for(i=0;i<n;i++)cin>>ric[i];
        for(i=0;i<m;i++)cin>>cab[i];
        int to1=0,to2=0;
        for(i=0;i<n;i++)
        {
            to1+=min(c2,ric[i]*c1);
        }
        to1=min(to1,c3);
        for(i=0;i<m;i++)
        {
            to2+=min(c2,cab[i]*c1);
        }
        to2=min(to2,c3);
        cout<<min(to1+to2,c4)<<"\n";
        
    }
}
