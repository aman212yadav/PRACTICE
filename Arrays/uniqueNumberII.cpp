//problem link https://hack.codingblocks.com/practice/p/369/463
#include<iostream>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    int arr[n],temp=0,a=0,b=0;
    for(i=0;i<n;i++)
    {cin>>arr[i];
      temp=temp^arr[i];
    }
    i=0;
    while(!(temp&(1<<i))){
        i++;
    }
    temp=i;
    for(i=0;i<n;i++)
      {
          if(arr[i]&(1<<temp))
              a=a^arr[i];
              else
              b=b^arr[i];
      }
      cout<<min(a,b)<<" "<<max(a,b);
  
}
