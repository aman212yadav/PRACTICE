//given a string (like "1234") convert it to number (1234) using recursion

#include<iostream>
using namespace std;
int getNumber(string s,int n){
  if( n >=0 )
     {
      int sma=getNumber(s,n-1);
      return sma*10+s[n]-'0';
     }
     return 0;
  
}
int main() {
  string s;
  cin>>s;
  cout<<getNumber(s,(int)s.size()-1);
	return 0;
}
