// practice problem https://hack.codingblocks.com/practice/p/365/97

#include<bits/stdc++.h>
using namespace std;
string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
   
string searchIn [] = {
            "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };
    void solver(string s,string output){
        
          if(s.empty()){
             
              
              for(auto p:searchIn)
              {  
                  if(p.find(output)!=string::npos)
                    cout<<p<<endl;
              }
              return;
              
          }
          for(auto k:table[s[0]-'0'])
            solver(s.substr(1),output+k);
    }
int main(){
    string s;
    cin>>s;
    solver(s,"");
    
    
    
    
}
