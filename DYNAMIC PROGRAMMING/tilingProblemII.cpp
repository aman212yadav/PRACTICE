// problem link  https://hack.codingblocks.com/contests/c/547/1045


#include<iostream>
#define mod 1000000007
using namespace std;

int main() {
  long long  t,n,m,i;
  cin>>t;
  while(t--){
    cin>>n>>m;
    long long arr[n+1];
    arr[0]=1;
    arr[1]=1;
    for(i=2;i<=n;i++){
      arr[i]=arr[i-1];
      if(i-m>=0)
      arr[i]=(arr[i]%mod+arr[i-m]%mod)%mod;
      
    }
    cout<<arr[n]<<"\n";
  }
	return 0;
}
