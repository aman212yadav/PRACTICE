// code for inorder ,preorder,postorder traversal of binary tree

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
void printPreOrder(node *root){
   if(root)
     {
      cout<<(root->d)<<" ";
      printPreOrder(root->left);
      printPreOrder(root->right);
     }

}
void printInOrder(node *root){
  if(root)
  { printInOrder(root->left);
    cout<<root->d<<" ";
    printInOrder(root->right);
  }
}
void printPostOrder(node *root){
  if(root){
    printPostOrder(root->right);
    printPostOrder(root->left);
    cout<<root->d<<" ";


  }
}
int main(){

node *root=buildTree();
printPostOrder(root);
cout<<endl;
printInOrder(root);
cout<<endl;
printPreOrder(root);


}
