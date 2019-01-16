//sorting using selection sort
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long n,i,j;
    cin>>n;
    long long arr[n];
    for(i=0;i<n;i++)cin>>arr[i];
    for(i=0;i<n;i++)
    {
        int idx=i;
        for(j=i+1;j<n;j++)
         if(arr[j]<arr[idx])
             idx=j;
             swap(arr[idx],arr[i]);
        
    }
    for(i=0;i<n;i++)
       cout<<arr[i]<<endl;
}
