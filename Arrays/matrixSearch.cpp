//problem link https://hack.codingblocks.com/practice/p/373/705

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,x,i,j;
  cin>>n>>m;
  int arr[n][m];

  for(i=0;i<n;i++)
  for(j=0;j<m;j++)cin>>arr[i][j];
  cin>>x;
  i=n-1;j=0;
  bool b=false;
  while(1){
    if(i<0 ||j>m)
     break;
    if(arr[i][j]==x)
       {
         b=true;
         break;
       }
       else if(arr[i][j]>x){
         i--;
       }
       else{
         j++;
       }

  }
  cout<<(b?1:0)<<endl;
}

