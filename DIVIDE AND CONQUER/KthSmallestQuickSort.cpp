// kth largest using median order statics algorithm


#include<bits/stdc++.h>
using namespace std;
int getKthSmallest(int *arr,int start,int end,int k){
   int pivot=arr[start];
   int green=start+1;
   int yellow=start+1;
   while(green<=end){
     if( arr[green] <= pivot){
        swap(arr[green],arr[yellow]);
        yellow++;
     }
     green++;
   }
   swap(arr[start],arr[yellow-1]);
   if(yellow-1==k-1)
   {
        return arr[yellow-1];
   }
   else if(yellow-1 < k-1){
      return getKthSmallest(arr,yellow,end,k);
   }
   else
   return getKthSmallest(arr,start,yellow-2,k);

}
int main(){
int n,i,k;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
   cin>>arr[i];
   
   cin>>k;
   cout<<"Kth largest Element is : ";
   cout<<getKthSmallest(arr,0,n-1,k);

}
