// problem link  https://hack.codingblocks.com/practice/p/390/356

#include<bits/stdc++.h>
using namespace std;
vector<string> v;
int co=0;
string table[] = { " ", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wx","yz" };
void smartKeypad(string s,string output){
  if(s.empty())
    { co++;
      v.push_back(output);
      return ;
    }
    for(auto k : table[s[0]-'0']){
      smartKeypad(s.substr(1),output+k);
    }
  
}
int main(){
  string s;
  cin>>s;
  smartKeypad(s,"");
  cout<<co<<endl;
  for(auto k:v)
    cout<<k<<" ";
  
}
