//lcm of two numbers


#include<iostream>
using namespace std;
long long  gcd(long long a,long long b){
  if(b==0)
    return a;
    return gcd(b,a%b);
}
long long lcm(long long n1,long long n2){
  
  return n1*n2/gcd(max(n1,n2),min(n1,n2));
}
int main() {
  long long n1,n2;
  cin>>n1>>n2;
  cout<<lcm(n1,n2);
	return 0;
}
