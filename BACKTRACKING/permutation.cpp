// generate all permutations of a string

#include<bits/stdc++.h>
using namespace std;
void printAllPermutations(string s,string output){
  if(s.empty()){
    cout<<output<<endl;
    return;
  }
  for(int i=0;i<s.size();i++){
     swap(s[i],s[0]);
     printAllPermutations(s.substr(1),output+s[0]);
     swap(s[i],s[0]);
  }
}
int main()
{
 string s;
 cin>>s;
 printAllPermutations(s,"");
 
}
