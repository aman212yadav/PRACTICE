//problem link https://hack.codingblocks.com/practice/p/373/716

#include<bits/stdc++.h>
#define mod 10000003
using namespace std;
bool isValid(long long *arr,long long n,long long k,long long cap){
 long long  worker=1,current=0,i;
  for(i=0;i<n;i++){
    if(arr[i]+current>cap){
      worker++;
      current=arr[i];
      if(worker>k || current>cap){
        return false;
      }
    }else{
      current+=arr[i];
    }
  }

  return true;
  
}
int main(){
  long long n,k,t,i,to=0,s=1,mid,ans;
  cin>>k>>n;
  long long arr[n];
  for(i=0;i<n;i++)
  {cin>>arr[i];
    to+=arr[i];
  }
  ans=to;
  while(s<=to){
    mid=(s+to)/2;
    if(isValid(arr,n,k,mid))
       {
         ans=mid;
         to=mid-1;
       }else{
         s=mid+1;
       }
    
  }
  cout<<ans%mod<<"\n";
  
  
  
}
