//problem link https://hack.codingblocks.com/practice/p/373/675


#include<bits/stdc++.h>
using namespace std;
int main(){
  int lower,upper,n,i,t,x,start,end;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)cin>>arr[i];
  cin>>t;
  while(t--){
    cin>>x;
    start=0;
    end=n-1;
    lower=-1;
    upper=-1;
    while(start<=end){
      int mid=(start+end)/2;
      if(arr[mid]==x)
         {
           lower=mid;
           end=mid-1;
         }
         else if(arr[mid]<x)
            start=mid+1;
            else
            end=mid-1;
    }
    start=0;end=n-1;
    while(start<=end){
      int mid=(start+end)/2;
      if(arr[mid]==x)
         {
           upper=mid;
           start=mid+1;
         }
         else if(arr[mid]<x)
            start=mid+1;
            else
            end=mid-1;
    }
    cout<<lower<<" "<<upper<<endl;
    
  }
  
}
