// given binary tree check it is BST or not


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
node * insertInBst(node *root ,int data){
   if(root==NULL)
     return new node(data);
    if(data<= root->d)
        root->left=insertInBst(root->left,data);
    else
        root->right=insertInBst(root->right,data);
    return root;
}

node * buildTree(){
 int d;
 node *root=NULL;
 cin>>d;
 while(d!=-1){
    root=insertInBst(root,d);
    cin>>d;
 }
 return root;

}
bool isBST(node *root,int l=INT_MIN,int r=INT_MAX){
         if(root==NULL)
            return true;
         if( root->d  >= l && root ->d < r && isBST(root->left,l,root->d)&& isBST(root->right,root->d,r) )
            return true;
         return false;

}
int main(){

node *root=buildTree();
if(isBST(root))
    cout<<"It is BST";
else
    cout<<"No it is Not a BST ";

}
