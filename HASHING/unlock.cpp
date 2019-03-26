// problem link https://hack.codingblocks.com/practice/p/380/1556



#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,co,i;
cin>>n>>k;
co=n;
map<int,int> m;
int arr[n];
for(i=0;i<n;i++)
   {cin>>arr[i];
     m[arr[i]]=i;
    }

for(i=0;i<n;i++){
    if(arr[i]!=co){
       int idx=m[co];

       m[arr[i]]=idx;
       m[co]=i;
       swap(arr[i],arr[idx]);
        k--;
       
    }
    if(k<=0)
      break;
    co--;
}
cout<<endl;
for(i=0;i<n;i++)
cout<<arr[i]<<" ";


}
