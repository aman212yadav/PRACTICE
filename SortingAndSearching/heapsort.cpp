// Heapsort
#include<bits/stdc++.h>
using namespace std;
void heapify(int *arr,int n,int ma){
int m=ma,left=2*ma+1,right=2*ma+2;
if(left<n && arr[m]<arr[left])
     m=left;
     if(right < n && arr[m]<arr[right])
      m=right;
      if(m!=ma){
      swap(arr[ma],arr[m]);
      heapify(arr,n,m);
      }

}
void heapsort(int *arr,int n){
  int j=n/2;
  while(j>=0){
  heapify(arr,n,j);
  j--;
  }
  for(int i=0;i<n;i++){
  swap(arr[0],arr[n-i-1]);
  heapify(arr,n-i-1,0);

  }

}
int main(){

int i,n;
cout<<"Enter The size of array\n";
cin>>n;
int arr[n];
cout<<"Enter Array Elements \n";
for(i=0;i<n;i++)
cin>>arr[i];
heapsort(arr,n);
cout<<"Array after calling Heap Sort\n";
for(i=0;i<n;i++)
 cout<<arr[i]<<" ";

}
