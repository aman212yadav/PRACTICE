// given preorder and inorder of a binary tree u have to build the tree

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
node* buildTree(int *in,int *pre,int s,int e){

static int i=0;

   if(s>e)
   return NULL;
   node *root=new node(pre[i]);
    int j;
   for( j=s;j<=e;j++)
     if(in[j]==pre[i])
       break;
        i++;
     root->left=buildTree(in,pre,s,j-1);
     root->right=buildTree(in,pre,j+1,e);

     return root;


}
void bfs(node *root){
  queue< node * > q;
    q.push(root);
    while(!q.empty()){
      node *temp=q.front();
      q.pop();
      cout<<temp->d<<" -> ";
      if(temp->left!=NULL)
       q.push(temp->left);
       if(temp->right!=NULL)
       q.push(temp->right);
    }

}
int main(){
int in[]={3,2,8,4,1,6,7,5};
int pre[]={1,2,3,4,8,5,6,7};
int n=sizeof(in)/sizeof(int);
node *root=buildTree(in,pre,0,n-1);
bfs(root);

}
