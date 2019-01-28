// problem link https://hack.codingblocks.com/practice/p/387/743

#include<iostream>
using namespace std;
int main() {
  long long a,b,c;
  cin>>a>>b>>c;
  long  long ans=1;
  while(b){
    if(b&1){
      ans=(ans%c*a%c)%c;
    }
    b=b>>1;
    a=(a%c*a%c)%c;
  }
  cout<<ans;
	return 0;
}
