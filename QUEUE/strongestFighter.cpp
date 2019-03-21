// problem link  https://hack.codingblocks.com/contests/c/537/812


#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,k;
cin>>n;
int arr[n];
queue<int> q;
for(i=0;i<n;i++)cin>>arr[i];
cin>>k;
for(i=0;i<k;i++){
    if(!q.empty() && arr[i]>arr[q.front()])
        q.pop();
    q.push(i);
}
cout<<arr[q.front()]<<" ";
for(;i<n;i++){
    while(!q.empty()&&(q.front()<=i-k || arr[i]>arr[q.front()]))
        q.pop();
    q.push(i);
    cout<<arr[q.front()]<<" ";
}




}
