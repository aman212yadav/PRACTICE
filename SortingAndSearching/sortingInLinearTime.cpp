//problem link  https://hack.codingblocks.com/practice/p/385/423


#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k,i;
  cin>>n;
  int start=-1,end=n;
  for(i=0;i<n;i++)
     {cin>>k;
      start+=(k==0);
      end-=(k==2);
     }
     for(i=0;i<n;i++){
       if(i<=start)
         cout<<0<<"\n";
         else if(i<end)
         cout<<1<<"\n";
         else
         cout<<2<<"\n";
     }
     
  
}
