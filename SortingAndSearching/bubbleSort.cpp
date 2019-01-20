//problem link  https://hack.codingblocks.com/practice/p/369/206

#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int *arr,int n){
  int i,j;
  for(i=0;i<n-1;i++)
   {
     for(j=0;j<n-i-1;j++)
     if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
   }
  
}
int main() {
  int n,i;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  cin>>arr[i];
  bubbleSort(arr,n);
  for(i=0;i<n;i++)
   cout<<arr[i]<<"\n";
	return 0;
}
