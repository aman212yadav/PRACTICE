// https://hack.codingblocks.com/practice/p/371/1171


#include<bits/stdc++.h>
using namespace std;
struct node{
   int parent;
   int ranki;
};
int find(node *subset,int i){
  if(subset[i].parent!=i)
     { subset[i].parent=find(subset,subset[i].parent);
     }
     return subset[i].parent;
}
void unioni( node *subset,int a,int b){

 int parentA=find(subset,a);
 int parentB=find(subset,b);
// cout<<a<<" "<<parentA<<" - - "<<b<<" "<<parentB<<endl;
 if(parentA==parentB)
      return;
  if(subset[parentA].ranki > subset[parentB].ranki)
   subset[parentB].parent=parentA;
   else if(subset[parentA].ranki < subset[parentB].ranki)
   subset[parentA].parent=parentB;
   else
   {subset[parentA].parent=parentB;
    subset[parentB].ranki++;
   }

}
int main(){
int i,n,m,a,b;
cin>>n>>m;
vector<int> G[n];
node subset[n];
for(i=0;i<n;i++){
   subset[i].parent=i;
   subset[i].ranki=0;
}

for(i=0;i<m;i++)
{
   cin>>a>>b;
    unioni(subset,a,b);
    G[a].push_back(b);
    G[b].push_back(a);
}
int arr[n]={0};
for(i=0;i<n;i++){
    arr[find(subset,i)]++;
}
int brr[n]={};
brr[n-1]=arr[n-1];
for(i=n-2;i>=0;i--)
     brr[i]=brr[i+1]+arr[i];
long long ans=0;
for(i=0;i<n-1;i++)
    ans+=arr[i]*brr[i+1];
    cout<<ans<<endl;
}
