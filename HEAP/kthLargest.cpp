// problem link   https://hack.codingblocks.com/practice/p/378/534


#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int n,k,i;
    cin>>n;
    priority_queue<int> pq;
    for(i=0;i<n;i++)
     {
         cin>>k;
         pq.push(k);
     }
     cin>>k;
     while(!pq.empty() && pq.size()>n-k+1)
        pq.pop();
        cout<<pq.top();
}
