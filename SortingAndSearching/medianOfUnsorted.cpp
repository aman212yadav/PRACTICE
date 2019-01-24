#include<bits/stdc++.h>
using namespace std;
int getMedian(int *arr,int start,int end,int n){
    int pivot=arr[start],green=start+1,yellow=start+1;
    while(green<=end){
      if(arr[green]<=pivot){
         swap(arr[green],arr[yellow]);
         yellow++;
      }
      green++;
    }
    swap(arr[start],arr[yellow-1]);
    if((yellow-1)==n/2)
       return arr[yellow-1];
       else if( (yellow-1)<n/2){
        return getMedian(arr,yellow,end,n);
       }
       else{
            return getMedian(arr,start,yellow-2,n);

       }
}
int main(){
int n,i;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
  cin>>arr[i];
  cout<<"Median without sorting\n";
  cout<<getMedian(arr,0,n-1,n)<<"\n";
  sort(arr,arr+n);
  cout<<"Median after sorting\n";
  cout<<arr[n/2]<<"\n";

}
