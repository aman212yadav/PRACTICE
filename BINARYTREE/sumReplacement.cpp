// replace node value with its child sum


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
int height(node *root){
   if(root==NULL)
       return 0;
   int left=height(root->left);
   int right=height(root->right);
   return 1+max(left,right);
}
int sumReplacement(node *root){
   if(root==NULL)
       return 0;
   if(!(root->left)&&!(root->right))
       return root->d;
   int left=sumReplacement(root->left);
   int right=sumReplacement(root->right);
   int temp=root->d;
   root->d=left+right;
   cout<<root->d<<" ";
   return temp;
}
int main(){

node *root=buildTree();
cout<<sumReplacement(root)<<endl;

}
