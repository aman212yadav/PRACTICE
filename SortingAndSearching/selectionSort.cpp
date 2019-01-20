//problem link https://hack.codingblocks.com/practice/p/369/207

#include<bits/stdc++.h>
using namespace std;
void selectionSort(int *arr,int n){
  int i,j,idx;
  for(i=0;i<n;i++)
  { idx=i;
    for(j=i+1;j<n;j++)
      if(arr[j]<arr[idx])
          idx=j;
          
          swap(arr[idx],arr[i]);
  }
  
}
int main() {
  int n;
  cin>>n;
  int arr[n],i;
  for(i=0;i<n;i++)
   cin>>arr[i];
   selectionSort(arr,n);
   for(i=0;i<n;i++)
     cout<<arr[i]<<"\n";
	return 0;
}
