// get Minimum and Maximum of an array using divide and conquer technique


#include<bits/stdc++.h>
using namespace std;
struct maxMin{
  long ma,mi;
};
maxMin getMaxMin(int *arr,int start,int end){
if(start==end){
   return {arr[start],arr[end]};
}
int mid=(start+end)/2;
maxMin p;
 p.ma=INT_MIN;
 p.mi=INT_MAX;
  if(start<=mid){
     maxMin m=getMaxMin(arr,start,mid);
     p.ma=max(p.ma,m.ma);
     p.mi=min(p.mi,m.mi);
  }
  if(mid+1<=end){
     maxMin m=getMaxMin(arr,mid+1,end);
     p.ma=max(p.ma,m.ma);
     p.mi=min(p.mi,m.mi);
  }
  return p;
}
int main(){
int n,i;
cout<<"Name    : Aman Yadav\n";
cout<<"Roll No : 171210007\n";
cout<<"Enter Size of array : ";
cin>>n;
cout<<"Enter Array Elements\n";
int arr[n];
for(i=0;i<n;i++)
   cin>>arr[i];
    maxMin r=getMaxMin(arr,0,n-1);
    cout<<"Maximum is "<<r.ma<<"\n";
    cout<<"Minimum is "<<r.mi<<"\n";

}
