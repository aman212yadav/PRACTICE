// Problem link  https://hack.codingblocks.com/practice/p/373/713


#include<bits/stdc++.h>
using namespace std;
bool possible(long long c,long long *arr,long long n,long long cow){
  int i,count=1,prev=0;
   for(i=1;i<n;i++)
     {
       if(arr[i]-arr[prev]>=c)
          {
            count++;
            prev=i;
          }
          if(count>=cow)
            return true;
     }
     return count>=cow;
     
  
}
int main(){
  long long start,end,mid,n,c,i,ans=0;
  cin>>n>>c;
  long long arr[n];
  for(i=0;i<n;i++)cin>>arr[i];
  sort(arr,arr+n);
  start=0;
  end=arr[n-1]-arr[0];
  while(start<=end){
      mid=(start+end)/2;
      if(possible(mid,arr,n,c)==true)
         {
           ans=mid;
           start=mid+1;
         }
         else{
           end=mid-1;
         }
    
    
  }
  cout<<ans<<endl;
  
  
  

  
}
