// size of largest bst in a given binary tree


#include<bits/stdc++.h>
using namespace std;
class node{
  public:
  int d;
  node *left;
  node *right;
  node(int n){
   d=n;
   left=NULL;
   right=NULL;
  }
};
struct info{
  int ma,mi,s;
  bool b;
  info(){}
  info(int m,int n,int o,bool p){
    ma=m;
    mi=n;
    s=o;
    b=p;
  }
};

node * build(int *pre,int *in,int s,int e){
  static int i=0;
  if(s>e)
    return NULL;
    node * root=new node(pre[i]);
    int j=s;
    while(j<=e && in[j]!=pre[i])
          j++;
    i++;
    root->left=build(pre,in,s,j-1);
    root->right=build(pre,in,j+1,e);
    return root;
}
void preorder(node *root){
  if(root==NULL)
   return ;
   if(root->left==NULL)
     cout<<"END => ";
     else
     cout<<root->left->d<<" => ";
     cout<<root->d<<" <= ";
     if(root->right==NULL)
     cout<<"END\n";
     else
     cout<<root->right->d<<"\n";

     preorder(root->left);
     preorder(root->right);


}
info getLargestBST(node *root){
  if(root==NULL){
    return { INT_MIN,INT_MAX,0,true};
  }
  if(root->left==NULL && root->right==NULL)
  {
    return {root->d,root->d,1,true};
  }
  info l=getLargestBST(root->left);
  info r=getLargestBST(root->right);
  if(l.b && r.b && l.ma < root->d && root->d < r.mi )
    { info temp;
      temp.ma=max(root->d,max(l.ma,r.ma));
      temp.mi=min(root->d,min(l.mi,r.mi));
      temp.s=1+l.s+r.s;
      temp.b=true;
      return temp;
    }
    else
    return {l.ma,r.mi,max(l.s,r.s),false};

}
int main(){

int n,i;
cin>>n;
int pre[n];
for(i=0;i<n;i++)
    cin>>pre[i];
int in[n];
for(i=0;i<n;i++)
    cin>>in[i];
node *root=build(pre,in,0,n-1);

cout<<getLargestBST(root).s<<"\n";

}
