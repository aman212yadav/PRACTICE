//problem link  https://hack.codingblocks.com/practice/p/390/335

#include<iostream>
using namespace std;
string  addStar(string s,int n){
  if(n<0)
   return "";
   string smallOutput=addStar(s,n-1);
   if(n-1>=0 && s[n-1]==s[n])
    smallOutput+="*";
    smallOutput+=s[n];
    return smallOutput;
     
}
int main() {
  string s;
  cin>>s;
  cout<<addStar(s,(int)s.size()-1);
	return 0;
}
