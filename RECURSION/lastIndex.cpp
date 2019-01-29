//problem link https://hack.codingblocks.com/practice/p/390/369

#include<iostream>
using namespace std;
long long index(long long *arr,long long n,long long m){
    
    if(n<0)
     return -1;
     if(arr[n]==m)
       return n;
      return index(arr,n-1,m); 
    
}
int main() {
    long long n,m,i;
    cin>>n;
    long long arr[n];
    for(i=0;i<n;i++)
      cin>>arr[i];
      cin>>m;
     cout<<index(arr,n-1,m); 
	return 0;
}
