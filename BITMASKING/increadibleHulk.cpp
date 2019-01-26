// problem link  https://hack.codingblocks.com/practice/p/366/135

#include<iostream>
using namespace std;
int main() {
  long long t,n,count=0;
  cin>>t;
  while(t--){
    cin>>n;
    count=0;
    while(n){
      count++;
      n=n&(n-1);
    }
    cout<<count<<"\n";
  }
	return 0;
}
