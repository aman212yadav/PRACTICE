// given inorder and preorder create binary tree free them


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
int main(){

int n,i;
cin>>n;
int pre[n];
for(i=0;i<n;i++)
    cin>>pre[i];
cin>>n;
int in[n];
for(i=0;i<n;i++)
    cin>>in[i];
node *root=build(pre,in,0,n-1);
preorder(root);
}
