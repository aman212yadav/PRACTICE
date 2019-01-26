//  problem link https://hack.codingblocks.com/practice/p/366/102


#include<iostream>
using namespace std;
int main() {
  long long sum, q,a,b,i,k;
  cin>>q;
  while(q--){
    cin>>a>>b;
    sum=0;
    for(i=a;i<=b;i++){
      k=i;
      while(k){
        k=k&(k-1);
        sum++;
      }
    }
    cout<<sum<<"\n";
    
  }
	return 0;
}
