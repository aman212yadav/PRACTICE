//problem link https://hack.codingblocks.com/practice/p/360/299



#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long mergeSum(long long *arr,long long start,long long end){
    int mid=(start+end)/2;
    int l1=mid-start+1,l2=end-mid,i=0,j=0,k=0,sum=0;
    long long brr[l1+l2];
    while(i<l1 || j<l2){
        if(i==l1)
           brr[k++]=arr[mid+1+j++];
           else if(j==l2)
           brr[k++]=arr[start+i++];
           else if(arr[start+i]<arr[mid+1+j])
           {brr[k++]=arr[start+i],sum=(sum%mod+arr[start+i]%mod*(end-(mid+j))%mod)%mod;
           i++;
           }
           else
           brr[k++]=arr[mid+1+j++];
    }
    for(i=0;i<l1+l2;i++)
      arr[start+i]=brr[i];
    return sum;
    
    
}
long long mergeSort(long long *arr,long long start,long long end){
    if(start>=end)
       return 0;
    long long left=mergeSort(arr,start,(start+end)/2);
    long long right=mergeSort(arr,(start+end)/2+1,end);
    return (left%mod+right%mod+mergeSum(arr,start,end)%mod)%mod;
    
}
int main(){
    
    long long n,i;
    cin>>n;
    long long arr[n];
    for(i=0;i<n;i++)
       cin>>arr[i];
    cout<<mergeSort(arr,0,n-1);
    
}
