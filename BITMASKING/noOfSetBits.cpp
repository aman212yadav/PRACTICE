// given t numbers count the no of set bits in binary representation of the numbers


#include<iostream>
using namespace std;
int main() {
  long long t,n;
  cin>>t;
  while(t--){
    cin>>n;
    int count=0;
    while(n){
      count++;
      n=n&(n-1);
    }
    cout<<count<<"\n";
  }
	return 0;
}
