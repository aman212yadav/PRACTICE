//problem link  https://hack.codingblocks.com/practice/p/346/256


#include<bits/stdc++.h>
using namespace std;
int main(){
int temp,n,w,i,j;
cin>>n>>w;
vector<int> val,weight;
for(i=0;i<w;i++)
   {cin>>temp;
    if(temp!=-1)
      {val.emplace_back(temp);
       weight.emplace_back(i+1);
      }
   }
n=(int)val.size();
long long dp[n+1][w+1];
for(i=0;i<=w;i++)
    dp[0][i]=INT_MAX;
 for(i=0;i<=n;i++)
    dp[i][0]=0;
 for(i=1;i<=n;i++){
   for(j=1;j<=w;j++)
     {
        dp[i][j]=dp[i-1][j];
        if(j>=weight[i-1])
          dp[i][j]=min(dp[i][j],val[i-1]+dp[i][j-weight[i-1]]);
     }
 }
 if(dp[n][w]==INT_MAX)
    cout<<"-1\n";
 else
cout<<dp[n][w]<<endl;
}
