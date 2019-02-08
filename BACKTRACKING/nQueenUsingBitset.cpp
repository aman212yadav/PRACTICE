// problem link https://hack.codingblocks.com/practice/p/406/399



#include<bits/stdc++.h>
using namespace std;
bitset<30> d1,d2,c;
void solve(int i,int n,int &ans){
  if(i==n){
    ans++;
    return;
  }
  for(int j=0;j<n;j++)
  {
    if(!d1[i-j+n-1]&& !d2[i+j] && !c[j])
       { d1[i-j+n-1]=d2[i+j]=c[j]=1;
         solve(i+1,n,ans);
         d1[i-j+n-1]=d2[i+j]=c[j]=0;
       }
  }
  
}
int main() {
  
  int ans=0,n;
  cin>>n;
  solve(0,n,ans);
  cout<<ans;
	return 0;
}
