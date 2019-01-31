// Merge Sort without Recursion



#include<bits/stdc++.h>
using namespace std;
struct node{
 int start,end,height;
};
void mergei(int *arr,int start,int end){
if(start>end)
   return;
   int mid=(start+end)/2;
   int i=0,j=0,l=mid-start+1,r=end-mid,k=0;
   int brr[end-start+1];
   while(i<l || j<r){
    if(i==l)
       {brr[k]=arr[mid+1+j];
        j++;
        k++;
       }
       else if(j==r){
       brr[k]=arr[start+i];
       i++;
       k++;
       }
       else if(arr[start+i]>=arr[mid+1+j])
        {brr[k]=arr[mid+1+j];
         j++;
         k++;
        }
        else{
        brr[k]=arr[start+i];
        i++;
        k++;
        }

   }
   for(i=0;i<k;i++)
   {arr[start+i]=brr[i];
   }
}
int main(){
  
int n,i;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
  cin>>arr[i];
  stack< node > state,merg;
  state.push({0,n-1,0});
  while(!state.empty()){

     node p=state.top();
      state.pop();
      int mid=(p.start+p.end)/2;
      if(p.start==p.end)
        continue;
      merg.push(p);
      if(p.start<=mid){
      state.push({p.start,mid,p.height+1});
       hei=max(hei,p.height+1);
      }
      if(mid+1<=p.end){ hei=max(hei,p.height+1);
      state.push({mid+1,p.end,p.height+1});}
  }
  while(!merg.empty()){
     node p=merg.top();
     merg.pop();
     mergei(arr,p.start,p.end);
  }
  for(i=0;i<n;i++)
   cout<<arr[i]<<" ";


}
