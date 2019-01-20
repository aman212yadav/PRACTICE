//problems link  https://hack.codingblocks.com/submission/1523020

#include<bits/stdc++.h>
using namespace std;
bool compare( pair<string,int> p1 , pair<string,int> p2){
    if(p1.second==p2.second)
      return  p1.first<=p2.first;
      
      
      return p1.second > p2.second;
}
int main(){
    long long x,i,n;
    cin>>x>>n;
    vector< pair<string,int> > v(n);
    for(i=0;i<n;i++)
      cin>>v[i].first>>v[i].second;
      sort(v.begin(),v.end(),compare);
     
    i=0;
    while(i<n && v[i].second>=x)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
        i++;
    }
    
    
    
    
}
