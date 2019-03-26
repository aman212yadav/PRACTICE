// problem link  https://hack.codingblocks.com/practice/p/380/533


#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  int i,temp=-1,temp1;
  map<int,int> m;
  for(i=0;i<n;i++)
  {
    cin>>temp1;
    m[temp1]++;
    if(i==0)
      temp=temp1;
      else{
        if(m[temp1]> m[temp])
           {
             temp=temp1;
           }

      }
  }
  cout<<temp<<endl;


	return 0;
}
