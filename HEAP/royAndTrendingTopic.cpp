//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/roy-and-trending-topics-1/description/
#include<bits/stdc++.h>
using namespace std;
typedef pair<long long ,long long > pi;
int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long  n,i,newz,z,l,c,p,s,id,score;
    cin>>n;
    priority_queue< pi > pq;
    map< long long ,long long> m;
    for(i=0;i<n;i++){
        cin>>id>>z>>p>>l>>c>>s;
        newz=p*50+l*5+c*10+s*20;
        score=newz-z;
        pq.push(make_pair(score,id));
        m[id]=newz;
    }
    int co=0;
    while(co<5 &&  !pq.empty()){
        cout<<pq.top().second<<" "<<m[pq.top().second]<<endl;
        pq.pop();
        co++;
    }
    
   
    
}
