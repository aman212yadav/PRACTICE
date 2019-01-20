//problem link https://hack.codingblocks.com/practice/p/385/437

#include<bits/stdc++.h>
using namespace std;
int main() {
  
  int n,i;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
    cin>>arr[i];
  int brr[1000001]={};
  for(i=0;i<n;i++){
    brr[arr[i]]++;
  }
  for(i=0;i<=1000000;i++)
    {
      while(brr[i]>0)
      {
        cout<<i<<" ";
        brr[i]--;
      }
      
    }
	return 0;
}
