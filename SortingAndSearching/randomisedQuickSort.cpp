// randomised quicksort algorithm

#include<bits/stdc++.h>
using namespace std;
void quickSort(long long  *arr,long long  start,long long  end){
 if(start> end)
  return;
  long long x=rand()%(end-start+1)+start;
  swap(arr[x],arr[start]);
  long long pivot=arr[start],green=start+1,yellow=start+1;
  while(green<=end){
      if(pivot>=arr[green])
         { swap(arr[yellow],arr[green]);
            yellow++;
         }
         green++;
  }
  swap(arr[start],arr[yellow-1]);
  quickSort(arr,start,yellow-2);
  quickSort(arr,yellow,end);
}
int main(){
long long  n,i;
cin>>n;
long long  arr[n];
for(i=0;i<n;i++)cin>>arr[i];
quickSort(arr,0,n-1);
for(i=0;i<n;i++)
 cout<<arr[i]<<" ";



}
