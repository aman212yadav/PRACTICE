// problem link https://hack.codingblocks.com/practice/p/406/912

#include<bits/stdc++.h>
using namespace std;
void solve(int *arr,int *brr,int su,int n,int j,int t){
    if(su==t)
      {
          for(int i=0;i<j;i++)
            cout<<brr[i]<<" ";
            cout<<endl;
            return ;
      }
      if(n<=0)
      return ;
      brr[j]=arr[0];
      solve(arr+1,brr,su+arr[0],n-1,j+1,t);
      solve(arr+1,brr,su,n-1,j,t);
    
}
int main() {
  int t,n,i;
  cin>>n;
  int arr[n];
  int brr[n];
  for(i=0;i<n;i++)
   cin>>arr[i];
   sort(arr,arr+n);
   cin>>t;
   for(i=0;i<n;i++){
       if(i==0 ||(i && arr[i]!=arr[i-1])){
            brr[0]=arr[i];
        solve(arr+i+1,brr,arr[i],n-i-1,1,t);
       }
   }
	return 0;
}
