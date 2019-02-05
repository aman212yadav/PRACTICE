// building and printing binary tree using inorder traversal



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
void printTree(node *root){
   if(root)
     {
      cout<<(root->d)<<" ";
      printTree(root->left);
      printTree(root->right);
     }

}
int main(){
node *root=buildTree();
printTree(root);
}
