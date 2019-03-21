// problem link  https://hack.codingblocks.com/contests/c/537/812


#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,i,k;
cin>>n;
long long  arr[n];
deque<int> q;
for(i=0;i<n;i++)cin>>arr[i];
cin>>k;
for(i=0;i<k;i++){
    while(!q.empty() && arr[i]>arr[q.back()])
        q.pop_back();
    q.push_back(i);
}
cout<<arr[q.front()]<<" ";
for(;i<n;i++){
    while(!q.empty()&&q.front()<=i-k)
        q.pop_front();
    while(!q.empty() && arr[i]>arr[q.back()])
      q.pop_back();
    q.push_back(i);
    cout<<arr[q.front()]<<" ";
}}
