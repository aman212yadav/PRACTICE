// problem link https://hack.codingblocks.com/practice/p/369/110

#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n,i,j,carry;
  cin>>n;
   string s="1";
  for(i=1;i<=n;i++){
    carry=0;
    for(j=0;j<(int)s.size();j++)
    {
      long long temp=(s[j]-'0')*i+carry;
      s[j]=temp%10+'0';
      carry=temp/10;
    }
    while (carry) 
    { 
        s = s+ to_string(carry%10); 
        carry = carry/10; 
    } 
  }
  for(i=(int)s.size()-1;i>=0;i--)
  cout<<s[i];
  
}
