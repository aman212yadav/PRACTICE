//problem link https://hack.codingblocks.com/practice/p/366/458

#include<iostream>
using namespace std;
int main() {
  long long t,i,n,j;
    cin>>n;
    long long arr[n],ans,p;
    for(i=0;i<n;i++)
      cin>>arr[i];
      int brr[64]={0};
      for(i=0;i<n;i++){
           j=0;
        while(arr[i]){
          brr[j]+=(arr[i]&1); 
          j++;
          
          arr[i]=arr[i]>>1;
        }
        
      }
      ans=0;
      p=1;
      for(i=0;i<64;i++){
        ans=ans+(brr[i]%3)*p;
        p=p<<1;
      }
      cout<<ans<<"\n";

	return 0;
}
