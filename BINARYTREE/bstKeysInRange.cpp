// problem link  https://hack.codingblocks.com/practice/p/355/1280


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

node * buildTree(int n){
 int d;
 node *root=NULL;
 while(n--){
        cin>>d;
    root=insertInBst(root,d);
 }
 return root;

}

void preOrder(node *root){
  if(root==NULL)
    return ;
  cout<<root->d<<" ";
  preOrder(root->left);
  preOrder(root->right);
}
void inOrder(node *root,int k1,int k2){
  if(root==NULL)
    return ;

  inOrder(root->left,k1,k2);
  if((root->d) >=k1 && (root->d) <=k2)
      cout<<root->d<<" ";
  inOrder(root->right,k1,k2);
}
int main(){
int t,n,i,k1,k2;
cin>>t;
while(t--){
    cin>>n;
    node *root=buildTree(n);
    cin>>k1>>k2;
    cout<<"# Preorder : ";
    preOrder(root);
    cout<<endl;
    cout<<"# Nodes within range are : ";
    inOrder(root,k1,k2);
    cout<<endl;

}



}

