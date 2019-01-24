//problem link https://hack.codingblocks.com/practice/p/373/192

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long n,p,i;
    cin>>n>>p;
    long long mid,start=1,end=n;
    float ans=0.0;
    while(start<=end){
        mid=(start+end)/2;
        if(mid*mid<=n){
            ans=mid;
            start=mid+1;
        }
        else
        {end=mid-1;
        }
    }
    float q=1.0;
    for(i=0;i<p;i++){
        q=q/10.0;
        while((ans+q)*(ans+q)<=n){
            ans=ans+q;
        }
    }
    cout<<ans<<"\n";
}
