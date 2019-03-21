// problem link  https://hack.codingblocks.com/practice/p/370/493



#include<bits/stdc++.h>
using namespace std;
vector< int> prime;
void seive(){
    prime.push_back(0);
    bool pr[100001]={0};
      pr[0]=pr[1]=1;
      for(long long i=2;i<=100000;i++){
        {  if(!pr[i]){
            prime.push_back(i);
           for(long long j=2*i;j<=100000;j+=i)
           {
               pr[j]=1;
           }
        }
        }

      }
}
int main(){
seive();
int temp,n,q,i;
cin>>n>>q;
stack<int> a[2];
stack<int> b[q+1];
for(i=0;i<n;i++)
{
    cin>>temp;
    a[0].push(temp);
}
for(i=1;i<=q;i++){
    while(!a[!(i%2)].empty()){
        temp=a[!(i%2)].top();
        a[!(i%2)].pop();
        if(temp%prime[i])
        {
            a[i%2].push(temp);
        }
        else
            b[i].push(temp);

    }

}
for(i=1;i<=q;i++)
{
    while(!b[i].empty()){
        cout<<b[i].top()<<" ";
        b[i].pop();
    }
}
  while(!a[q%2].empty()){
    cout<<a[q%2].top()<<" ";
      a[q%2].pop();
  }

}
