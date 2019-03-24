// problem link  https://hack.codingblocks.com/practice/p/368/1012



#include<bits/stdc++.h>
using namespace std;
int main(){
long long t,n,i,cost,prev;
cin>>t;
while(t--){

    cin>>n;
    long long c[n],l[n];
    for(i=0;i<n;i++)cin>>c[i];
    for(i=0;i<n;i++)cin>>l[i];
    cost=l[0]*c[0];
    prev=0;
    for(i=1;i<n;i++)
    {
        if(c[i]>c[prev]){
            cost+=l[i]*c[prev];
        }else{
             cost+=l[i]*c[i];
             prev=i;
        }
    }
    cout<<cost<<endl;
}

}
