//problem link   https://hack.codingblocks.com/practice/p/390/370


#include<bits/stdc++.h>
using namespace std;
int cap=0,m;
void getIndices(int *arr,int *brr,int n,int idx)
{ if(idx==n)
    return;
    if(arr[0]==m)
       { brr[cap]=idx;
        cap++;
       }
    getIndices(arr+1,brr,n,idx+1);
  
}
int main(){
  int n,i;
  cin>>n;
  int *arr=new int[n];
  int *brr=new int[n];
  for(i=0;i<n;i++)
   cin>>arr[i];
  cin>>m;
  getIndices(arr,brr,n,0);
  for(i=0;i<cap;i++)
   cout<<brr[i]<<" ";
  
  
  
}
