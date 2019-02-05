//height of binary tree



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
int main(){

node *root=buildTree();
cout<<height(root)<<endl;

}
