//problem link https://hack.codingblocks.com/practice/p/369/372

#include<bits/stdc++.h>
using namespace std;
void reverse(long long *arr,long long i,long long n){
   if(i>=n/2)
     return ;
     swap(arr[i],arr[n-i-1]);
     inverse(arr,i+1,n);
    
}
int main(){
    
    long long n,i;
    cin>>n;
    long long arr[n];
    for(i=0;i<n;i++)
      cin>>arr[i];
      reverse(arr,0,n);
      for(i=0;i<n;i++)
       cout<<arr[i]<<" ";
}
