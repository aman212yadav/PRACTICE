//problem link  https://hack.codingblocks.com/practice/p/373/1226


#include<bits/stdc++.h>
using namespace std;
int main() {
  long long n,m,x,y;
  cin>>n>>m>>x>>y;
  long long  ans=0,start=1,end=n;
    while(start<=end){
      long long mid=(start+end)/2;
      if( mid*x <=y*(n-mid)+m)
        {
          ans=mid;
          start=mid+1;
        }
        else{
          end=mid-1;
        }
      
    }
    cout<<ans<<"\n";
  

	return 0;
}
