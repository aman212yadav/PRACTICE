//problem link https://hack.codingblocks.com/practice/p/369/208

#include<bits/stdc++.h>
using namespace std;
void insertionSort(int *arr,int n){
  int i,j,temp;
  for(i=1;i<n;i++)
  {j=i-1;
  temp=arr[i];
  while(j>=0 && arr[j]>temp){
    arr[j+1]=arr[j];
    j--;
  }
  arr[j+1]=temp;
  }
  
}
int main(){
  int n,i;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  cin>>arr[i];
  insertionSort(arr,n);
  for(i=0;i<n;i++)
    cout<<arr[i]<<"\n";
  
}
