// problem link  https://hack.codingblocks.com/practice/p/346/1086



#include<bits/stdc++.h>
using namespace std;
int main(){
int n,sum,i,j;
cin>>n>>sum;
bool brr[2][sum+1];
brr[0][0]=true;
brr[1][0]=true;
for(i=1;i<=sum;i++)
   {brr[0][i]=false;
   }
int arr[n+1];
for(i=1;i<=n;i++)cin>>arr[i];
for(i=1;i<=n;i++)
  {
    int b=i%2;
    for(int j=1;j<=sum;j++)
       {brr[b][j]=brr[!b][j];
          if(arr[i]<=j)
          brr[b][j]=brr[b][j]||brr[b][j-arr[i]];
       }
  }
if(brr[n%2][sum])
    cout<<"Yes\n";
else
    cout<<"No\n";
}
