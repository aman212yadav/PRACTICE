//problem link  https://hack.codingblocks.com/practice/p/360/851

#include<bits/stdc++.h>
using namespace std;
long long getCrossingSum(long long *arr,long long start,long long end){
    int mid=(start+end)/2,sum1,sum2,co=arr[mid],j;
    sum1=arr[mid];
    j=mid-1;
    while(j>=start){
        co=co+arr[j];
        sum1=max(sum1,co);
        j--;
    }
    j=mid+1;
    co=0;
    sum2=0;
    while(j<=end){
        co=co+arr[j];
        sum2=max(sum2,co);
        j++;
    }
    return sum1+sum2;
    
    
}
long long maxSumSubarray(long long *arr,long long start,long long end){
    if(start>end)
      return INT_MIN;
      if(start==end)
      return arr[start];
      long long left,right,crossing,mid=(start+end)/2;
      left=maxSumSubarray(arr,start,mid);
      right=maxSumSubarray(arr,mid+1,end);
      crossing=getCrossingSum(arr,start,end);
      return max(crossing,max(left,right));
}
int main(){
    
    long long i, n,t;
    cin>>t;
    while(t--){
        
        cin>>n;
        long long arr[n];
        for(i=0;i<n;i++)cin>>arr[i];
        cout<<maxSumSubarray(arr,0,n-1)<<endl;
    }
}
