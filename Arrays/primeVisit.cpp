//problem link https://hack.codingblocks.com/practice/p/369/63
#include<bits/stdc++.h>
using namespace std;
int arr[1000008]={};
void pr(){
    arr[0]=arr[1]=1;
    int i,j;
    for(i=2;i<=1000000;i++)
    {    if(!arr[i])
        for(j=2*i;j<=1000000;j+=i)
        {
            arr[j]=1;
        }
    }
    arr[0]=arr[1]=0;
    for(i=2;i<=1000000;i++)
        if(arr[i]==0)
          arr[i]=arr[i-1]+1;
      else
        arr[i]=arr[i-1];


}
int main(){
    pr();
    long long n,a,b;
    cin>>n;
    while(n--)
    {
      cin>>a;
      cin>>b;
        cout<<arr[b]-arr[a-1]<<endl;
    }

}
