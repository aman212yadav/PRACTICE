//problem link  https://hack.codingblocks.com/practice/p/390/136


#include<iostream>
using namespace std;
int co=0;
void isPossible(int *a,int sum,int n){
  if(n==0)
    {if(sum==0)
     co++;
     return;
      
    }
    isPossible(a+1,sum+a[0],n-1);
    isPossible(a+1,sum,n-1);
}
int main() {

	int t,n,i;
	cin>>t;
	while(t--){
	  co=0;
	  cin>>n;
	  int a[n];
	  for(i=0;i<n;i++)
	     cin>>a[i];
	     isPossible(a,0,n);
	     cout<<(co>=2? "Yes\n":"No\n");
	     
	  
	  
	}
}
