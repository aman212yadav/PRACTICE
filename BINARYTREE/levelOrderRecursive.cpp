//level order traversal of binary tree using recursion



#include<bits/stdc++.h>
using namespace std;
class node{
  public:
  int d;
  node *left,*right;
  node(int d){
      this->d=d;
      left=NULL;
      right=NULL;
  }
};
node * buildTree(){
   int d;
   cin>>d;
   if(d==-1)
   {
       return NULL;
   }
   node *root=new node(d);
   root->left=buildTree();
   root->right=buildTree();
   return root;

}
int height(node * root){
   if(root==NULL)
       return 0;
   int leftSubtreeHeight=height(root->left);
   int rightSubtreeeHeight=height(root->right);
   return 1+max(leftSubtreeHeight,rightSubtreeeHeight);
}
void printKthLevel(node *root,int k){
  if(root)
  {
      if(k==1)
      {
          cout<<root->d<<" ";
          return;
      }
      printKthLevel(root->left,k-1);
      printKthLevel(root->right,k-1);
  }
}
void levelOrderTraversal(node *root){
  if(root){
    int H=height(root);
    for(int i=1;i<=H;i++)
     {
        printKthLevel(root,i);
     }

  }

}
int main(){

node *root=buildTree();
levelOrderTraversal(root);

}
