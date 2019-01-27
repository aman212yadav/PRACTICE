// problem link  https://hack.codingblocks.com/practice/p/365/1569


#include<bits/stdc++.h>
using namespace std;
bool possible(int *a,int *b,int l,int k,int n){
  for(int i=l-1;i<n;i++)
    { if(i-l>0)
        {
          if(a[i]-a[i-l]<=k || b[i]-b[i-l]<=k)
          return true;
        }
      else{
        if(a[i]<=k || b[i]<=k)
          return true;
      }
    }
    return false;
  
}
int main() {
  long long k,ma,start,end,mid;
  cin>>k;
  string s;
  cin>>s;
  int a[s.size()]={0};
  int b[s.size()]={0};
  for(int i=0;i<(int)s.size();i++ )
     { if(i>0)
       a[i]=a[i-1],b[i]=b[i-1];
       if(s[i]=='a')
         a[i]++;
         else
         b[i]++;
     }
  ma=0;
  start=0;
  end=(int)s.size();
  while(start<=end){
    mid=(start+end)/2;
    if(possible(a,b,mid,k,(int)s.size())){
      ma=mid;
      start=mid+1;
    }
    else
     end=mid-1;
    
  }
  cout<<ma<<"\n";
	return 0;
}
