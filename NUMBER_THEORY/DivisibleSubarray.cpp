//problem link  https://hack.codingblocks.com/practice/p/364/266

#include<iostream>
using namespace std;
int main() {
  long long t,n,i;
  cin>>t;
  while(t--){
    cin>>n;
    long long arr[n],ans=0;
    for(i=0;i<n;i++)
      cin>>arr[i],arr[i]=arr[i]+(i>0?arr[i-1]:0);
      long long freq[100000]={0};
      freq[0]=1;
      for(i=0;i<n;i++)
      { arr[i]=arr[i]%n;
      arr[i]=(arr[i]+n)%n;
      freq[arr[i]]++;
      }
      for(i=0;i<100000;i++)
        ans=ans+freq[i]*(freq[i]-1)/2;
        
        cout<<ans<<"\n";
  }
	return 0;
}
