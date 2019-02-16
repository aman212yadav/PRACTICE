
//problem Link
//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-champions-league/

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long i,m,n,k,sum=0;
    cin>>m>>n;
    priority_queue< int> pq;
    for(i=0;i<m;i++)
     {
         cin>>k;
         pq.push(k);
     }
     while(n>0 && !pq.empty()){
         sum+=pq.top();
         int r=pq.top()-1;
         pq.pop();
         if(r>0)
         pq.push(r);
         n--;
     }
     cout<<sum<<endl;
    
    
}


