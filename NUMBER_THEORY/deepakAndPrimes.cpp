// problem link https://hack.codingblocks.com/practice/p/387/700

#include<bits/stdc++.h>
using namespace std;
bool isPrime[86100000]={};
int prime[5000000],co=0;
void sieve(){
    isPrime[0]=isPrime[1]=1;
    long long i,j;
    for(i=4;i<86100000;i+=2)
       isPrime[i]=1;
       prime[0]=2;
       co++;
       for(i=3;i <86100000 ;i+=2){
           if(!isPrime[i]){
               prime[co++]=i;
               for(j=2*i;j<86100000;j+=i)
                isPrime[j]=1;
           }
           
       }
}
int main(){
    sieve();
    int n;
    cin>>n;
    cout<<prime[n-1];
    
    
}
