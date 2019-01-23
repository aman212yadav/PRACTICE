// problem link https://hack.codingblocks.com/practice/p/373/435



#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,i,start,end,mid;
    cin>>n;
    long long arr[n];
    for(i=0;i<n;i++)
      cin>>arr[i];
      start=0;
      end=n - 1;
      while(start<=end)
     {
         mid=(start+end)/2;
         if(mid+1<n && arr[mid]>arr[mid+1])
            {
                cout<<mid<<endl;
                break;
            }
         else if(arr[mid]>=arr[0])
           {
               start=mid+1;
           }
           else{
               end=mid-1;
           }
         
     }
    
}
