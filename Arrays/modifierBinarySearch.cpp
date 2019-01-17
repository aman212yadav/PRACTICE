// problem link https://hack.codingblocks.com/practice/p/369/433

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,i,x,mid,idx=-1;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
      cin>>arr[i];
      
      cin>>x;
    int left=0,right=n-1;
    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]==x){
            idx=mid;
            break;
        }
        else if(arr[0]<=x){
            right=mid-1;
        }
        else
        left=mid+1;
        
    }
    cout<<idx;
}
