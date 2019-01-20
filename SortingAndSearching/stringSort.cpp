//problem link  https://hack.codingblocks.com/practice/p/385/103

#include<bits/stdc++.h>
using namespace std;
bool cmp(string s1,string s2){
  if(s1.find(s2)!=string::npos){
    return s1.size()>= s2.size();
  }
  return s1<=s2;
}
int main(){
  int n,i;
  cin>>n;
  string  arr[n];
  for(i=0;i<n;i++)
  cin>>arr[i];
  sort(arr,arr+n,cmp);
  for(i=0;i<n;i++)
   cout<<arr[i]<<"\n";
  
}
