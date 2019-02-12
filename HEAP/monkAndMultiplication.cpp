// problem link   https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-multiplication/


#include<bits/stdc++.h>
using namespace std;
void printMultiply( priority_queue<int,vector<int> ,greater<int> >  pq){
    if(pq.size()<3)
      cout<<"-1\n";
      else
      {
          long long ans=1;
          while(!pq.empty()){
              ans=ans*(long long)pq.top();
              pq.pop();
          }
          cout<<ans<<"\n";
      }
    
}
int main(){
    long long n,co=0,k;
    cin>>n;
    priority_queue<int,vector<int> ,greater<int> > pq;
    while(n--){
        cin>>k;
        if(pq.size()<3){
            pq.push(k);
        }
        else{
            if(pq.top() < k)
              {
                  pq.pop();
                  pq.push(k);
              }
        }
        printMultiply(pq);
        
    }
    
    
    
}


