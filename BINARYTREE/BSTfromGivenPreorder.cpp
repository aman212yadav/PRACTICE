// given preOrder traversal of an array build binary tree from this


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


node *  buildTreeFromGivenPreorder(int *pre,int s,int e){
    if(s>e)
        return NULL;
     node *root=new node(pre[s]);
     int pivot=s+1;
     while(pivot<=e && pre[pivot]<pre[s])
          pivot++;
     root->left=buildTreeFromGivenPreorder(pre,s+1,pivot-1);
     root->right=buildTreeFromGivenPreorder(pre,pivot,e);
     return root;
}
void preorder(node *root){
  if(root==NULL)
      return ;
      cout<<root->d<<" ";
  preorder(root->left);
  preorder(root->right);
}
int main(){

//node *root=buildTree();
int pre[]={5,3,1,7,6,8};
node *root=buildTreeFromGivenPreorder(pre,0,5);
preorder(root);

}
