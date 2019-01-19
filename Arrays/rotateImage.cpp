//problem link https://hack.codingblocks.com/practice/p/369/439
#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  int arr[n][n],i,j;
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
   cin>>arr[i][j];
   for(i=0;i<n;i++)
   for(j=0;j<i;j++)
    swap(arr[i][j],arr[j][i]);
    for(i=0;i<n/2;i++)
     {
       for(j=0;j<n;j++)
         swap(arr[i][j],arr[n-i-1][j]);
     }
     for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
          cout<<arr[i][j]<<" ";
          cout<<"\n";
      }
	return 0;
}
