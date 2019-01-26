// calculate x power n in log(n) time

#include<iostream>
using namespace std;
int main() {
  long long x,n,ans,p;
  cin>>x>>n;
  ans=1;
  while(n){
    if(n&1)
       {
         ans=(ans*x);
       }
       n=(n>>1);
       x=(x*x);
  }
  cout<<ans<<"\n";
	return 0;
}
