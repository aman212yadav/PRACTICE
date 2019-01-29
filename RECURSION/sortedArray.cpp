// problem link https://hack.codingblocks.com/practice/p/390/86

#include<bits/stdc++.h>
using namespace std;
bool isSorted(long long *arr,int n){
    if(n==1)
      return true;
      if(arr[0]<=arr[1] && isSorted(arr+1,n-1))
        return true;
    return false;
    
}
int main(){
    
  long long n,i;
  cin>>n;
  long long arr[n];
  for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<(isSorted(arr,n)?"true":"false");
    
}
