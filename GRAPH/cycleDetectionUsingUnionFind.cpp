// detecting cycle in undirected graph using union find data structure


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
bool cycle=false;
for(i=0;i<m;i++)
{
   cin>>a>>b;
    int aa=find(subset,a);
    int bb=find(subset,b);
    if(aa==bb)
      {cycle=true;
      }
      else
        unioni(subset,a,b);
    G[a].push_back(b);
    G[b].push_back(a);
}

if(cycle)
 cout<<"Wallah habibi cycle\n";
 else
 cout<<"Ille NO Cycle\n";

}
