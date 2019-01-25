//problem link  https://hack.codingblocks.com/contests/c/204/975

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long n,i,ans,ma=0,may=0;
    cin>>n;
     long long  x[n];
     long long y[n];
    for(i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    sort(x,x+n);
    sort(y,y+n);
    for(i=1;i<n;i++){
        if(x[i]-x[i-1]-1>0)
          ma=max(ma,x[i]-x[i-1]-1);
          if(y[i]-y[i-1]-1>0)
          may=max(may,y[i]-y[i-1]-1);
    }
       
     cout<<ma*may<<"\n";
}
