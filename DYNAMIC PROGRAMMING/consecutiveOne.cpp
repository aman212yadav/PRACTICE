// count the number of binary string of length n such that no now two 1's are together 

#include<bits/stdc++.h>
using namespace std;
int getTotalCount(int n)
{
   pair<int,int> arr[n];
   arr[0]={1,1};
   for(int i=1;i<n;i++)
   { arr[i].first=arr[i-1].first+arr[i-1].second;
     arr[i].second=arr[i-1].first;
   }
  return arr[n-1].first+arr[n-1].second;
}

int main()
{ int n,t;
cin>>t;
while(t--){
cin>>n;
cout<<getTotalCount(n)<<endl;}
}
