//problem link  https://hack.codingblocks.com/practice/p/390/73

#include<bits/stdc++.h>
using namespace std;
vector<string> v;
void subsequence(string s,string k){
    if(s.empty())
      {
          v.push_back(k);
        
          return;
      }
      subsequence(s.substr(1),k);
      subsequence(s.substr(1),k+s[0]);
     
}
int main(){
    
   long long n;
   cin>>n;
   string s;
   while(n--){
       v.clear();
   cin>>s;
   subsequence(s,"");
   sort(v.begin(),v.end());
   for(auto p:v)
     cout<<p<<"\n";
   }
   
    
}
