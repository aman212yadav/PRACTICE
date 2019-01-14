// problem link https://hack.codingblocks.com/practice/p/369/1259

#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long t,n,i;
  cin>>t;
  while(t--)
    {
      cin>>n;
      int arr[n];
      for(i=0;i<n;i++)cin>>arr[i];
      int currentSum=0,maxSoFar=0;
      for(i=0;i<n;i++)
        {
          currentSum+=arr[i];
          if(currentSum<0)
             currentSum=0;
          if(currentSum > maxSoFar)
             maxSoFar=currentSum;
        }
        cout<<maxSoFar<<endl;
    }

}
