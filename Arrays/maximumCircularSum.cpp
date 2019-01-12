//MAXIMUM CIRCULAR SUM problem link https://hack.codingblocks.com/practice/p/369/1288


#include<bits/stdc++.h>
using namespace std;
int kadane(int *arr,int n){
    int maximum_so_far=0,currentSum=0,i;
    for(i=0;i<n;i++)
    {
        currentSum+=arr[i];
        if(currentSum<0)
          currentSum=0;
          if(currentSum>maximum_so_far)
           maximum_so_far=currentSum;
    }
    return maximum_so_far;
    
}
int maxsumCircularSubarray(int *arr,int n){
    int kadaneSum=kadane(arr,n);
    int arraySum=0,wrapSum,i;
    for(i=0;i<n;i++)
      {
          arraySum+=arr[i];
          arr[i]=-arr[i];
      }
      wrapSum=arraySum+kadane(arr,n);
      return max(kadaneSum,wrapSum);
      
}
int main()
{
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)cin>>arr[i];
        cout<<maxsumCircularSubarray(arr,n)<<endl;
        
    }

}
