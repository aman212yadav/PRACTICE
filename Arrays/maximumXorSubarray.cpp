// problem link https://hack.codingblocks.com/contests/c/511/1568


#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,j;
cin>>n;
long long arr[n+1],i;
long long a[n+1]={0};
long long b[n+2]={0};
long long xo=0,ma;
for(i=1;i<=n;i++){
    cin>>arr[i];
    xo=(xo^arr[i]);
    a[i]=arr[i]^a[i-1];
}
for(i=n;i>=1;i--)
   b[i]=arr[i]^b[i+1];
ma=0;
for(i=1;i<=n;i++){
   for(j=i;j<=n;j++){

       ma=max(ma,xo^a[i-1]^b[j+1]);
   }

}
cout<<ma<<endl;

}
