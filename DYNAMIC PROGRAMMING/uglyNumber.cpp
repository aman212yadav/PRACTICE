// problem link  https://hack.codingblocks.com/practice/p/346/1271



#include<bits/stdc++.h>
using namespace std;
int main(){

long long t,n,i2=1,i3=1,i5=1,m2,m3,m5,i;
long long ugly[10002];
ugly[1]=1;
for(i=2;i<=10001;i++)
{
    m2=ugly[i2]*2;
    m3=ugly[i3]*3;
    m5=ugly[i5]*5;
    ugly[i]=min(m2,min(m3,m5));
    if(ugly[i]==m2)
        i2+=1;
    if(ugly[i]==m3)
        i3+=1;
    if(ugly[i]==m5)
        i5+=1;

}
cin>>t;
while(t--){

    cin>>n;
    cout<<ugly[n]<<endl;

}



}
