//problem link https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/dhoom-4/description/



#include<bits/stdc++.h>
#define mod 100000
using namespace std;
int main(){
long long source,destination,n,i;
long long time[100001],temp;
memset(time,-1,sizeof(time));
cin>>source>>destination;
cin>>n;
long long arr[n];
for(i=0;i<n;i++)
      cin>>arr[i];
time[source]=0;
queue<long long> q;
q.push(source);

while(!q.empty()){
    long long val=q.front();
    q.pop();
     if(val==destination)
          break;
     for(i=0;i<n;i++)
     {
         temp=(val*arr[i])%mod;
         if(time[temp]==-1){
            time[temp]=1+time[val];
            q.push(temp);
         }

     }


}
cout<<time[destination]<<endl;
}
