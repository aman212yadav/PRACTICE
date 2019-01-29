//problem link https://hack.codingblocks.com/practice/p/390/337


#include<bits/stdc++.h>
using namespace std;
void duplicateHataBey(string s,string &str){
  if(s.empty())
   return ;
   
   if(str.empty() or str[str.size()-1]!=s[0] )
     str+=s[0];
    duplicateHataBey(s.substr(1),str);
}
int main() {
  string s,str="";
  cin>>s;
  duplicateHataBey(s,str);
  cout<<str;
	return 0;
}
