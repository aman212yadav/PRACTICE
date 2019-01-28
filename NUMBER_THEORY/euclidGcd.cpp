// gcd of two numbers

#include<iostream>
using namespace std;
long long  gcd(long long a,long long b){
  if(b==0)
    return a;
    return gcd(b,a%b);
}
int main() {
  long long n1,n2;
  cin>>n1>>n2;
  cout<<gcd(max(n1,n2),min(n1,n2));
	return 0;
}
