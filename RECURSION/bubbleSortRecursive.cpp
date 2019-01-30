// sort array using bubble sort


#include<bits/stdc++.h>
using namespace std;
void bubbleSort(long long *arr,long long  n,int j){
    if(n==1 || j>=n)
     return ;
     if(j==n-1){
         bubbleSort(arr,n-1,0);
       
     }
     if(j+1<n  && arr[j]>arr[j+1])
      swap(arr[j],arr[j+1]);
      bubbleSort(arr,n,j+1);
    
}
int main(){
    
    long long n,i;
    cin>>n;
    long long arr[n];
    for(i=0;i<n;i++)
      cin>>arr[i];
      bubbleSort(arr,n,0);
      for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
}
