// problem link https://hack.codingblocks.com/practice/p/373/274

#include<bits/stdc++.h>
using namespace std;
int main(){
  long long  n,k,start,ans,end,t,mid;
  cin>>t;
  while(t--){
    cin>>n>>k;
    start=1;
    ans=1;
    end=1000000000000000;
    while(start<=end){
      mid=(start+end)/2;
      if( pow(mid,k)<=n)
        {
          ans=mid;
          start=mid+1;
        }else{
          end=mid-1;
        }
    }
    cout<<ans<<"\n";
  }
  
  
}
