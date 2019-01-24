//problem link https://hack.codingblocks.com/practice/p/373/1263

#include<bits/stdc++.h>
using namespace std;
bool isValid(long long *arr,long long n,long long m,long long cap){
  int student=1,current=0,i;
  for(i=0;i<n;i++)
    {
      if(arr[i]+current > cap)
        {
          student++;
          current=arr[i];
          if(student>m)
            return false;
        }
        else{
          current+=arr[i];
        }
      
    }
    return true;
  
  
}
int main(){
  long long i,t,n,m;
  cin>>t;
  while(t--){
    cin>>n>>m;
    long long arr[n],s=0,to=0,mid,ans;
     for(i=0;i<n;i++)
       {cin>>arr[i];
           to+=arr[i];
        s=max(s,arr[i]);
       }
       ans=to;
       while(s<=to){
         mid=(s+to)/2;
         if(isValid(arr,n,m,mid)){
           ans=mid;
           to=mid-1;
         }
         else{
           s=mid+1;
         }
         
       }
       cout<<ans<<"\n";
       
       
    
  }
  
  
}
