//problem link  https://hack.codingblocks.com/practice/p/350/1606




#include<iostream>
using namespace std;
void printPreorder(int *arr,int s,int e){
  if(s>e)
  return;
  int mid=(s+e+1)/2;
  cout<<arr[mid]<<" ";
  printPreorder(arr,mid+1,e);
  printPreorder(arr,s,mid-1);
  
}
int main() {
  int n,i;
  cin>>n;
  i=n-1;
  int arr[n];
  while(i>=0){
    cin>>arr[i];
    i--;
  }
  for(i=1;i<n;i++)
  arr[i]=arr[i]+arr[i-1];
  printPreorder(arr,0,n-1);
  
	return 0;
}
