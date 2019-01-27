//problem link  https://hack.codingblocks.com/practice/p/366/498

#include<bits/stdc++.h>
using namespace std;
int main(){
  long long l,r,i,j,ma=0;
  cin>>l>>r;
  for(i=l;i<=r;i++){
    for(j=i+1;j<=r;j++){
      ma=max(ma,i^j);
      
    }
  }
  cout<<ma<<"\n";
  
}
