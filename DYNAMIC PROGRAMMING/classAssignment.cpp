// problem link  https://hack.codingblocks.com/contests/c/452/875


#include<bits/stdc++.h>
using namespace std;
int main() {
  int n,t;
  cin>>t;
  for(int i=1;i<=t;i++){
   
   
    cin>>n;
    pair<int,int> arr[n+1];
    arr[1].first=1;
    arr[1].second=1;
     for(int i=2;i<=n;i++)
       {
          arr[i].first=arr[i-1].first+arr[i-1].second;
          arr[i].second=arr[i-1].first;
       }
    cout<<"#"<<i<<" : "<<arr[n].first+arr[n].second<<endl;
  }
  
	return 0;
}
