//binary search algorithm

#include<bits/stdc++.h>
using namespace std;
int main(){
  
  int n,m,i;
  cin>>n;
  int arr[n],start=0,end=n-1;
  for(i=0;i<n;i++)
    cin>>arr[i];
    cin>>m;
  int idx=-1;
  while(start<=end){
    int mid=(start+end)/2;
    if(arr[mid]==m)
      {idx=mid;
        break;}
      else if(arr[mid]<m)
        start=mid+1;
        else
        end=mid-1;
  }
  cout<<idx<<endl;
}
