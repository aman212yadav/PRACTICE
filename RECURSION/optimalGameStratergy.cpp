// problem link  https://hack.codingblocks.com/practice/p/390/428

#include<bits/stdc++.h>
using namespace std;
int piyushKoJitau(int *arr,int i,int j,bool p,int su){
      if(i+1==j){
          if(p)
            return su+max(arr[i],arr[j]);
            else
            return su;
      }
      if(p){
          return max(piyushKoJitau(arr,i+1, j,!p,su+arr[i]),piyushKoJitau(arr,i, j-1,!p,su+arr[j]));
      }
      else
        {
         
             return min(piyushKoJitau(arr,i+1, j,!p,su),piyushKoJitau(arr,i, j-1,!p,su));
        }
      

  
}
int main() {
  int n,i;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<piyushKoJitau(arr,0,n-1,true,0);
	return 0;
}
