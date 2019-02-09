// insert data in BST 
// information: inorder traversal of BST gives element in sorted order

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
void inorder(node *root){
   if(root==NULL)
     return;
   inorder(root->left);
   cout<<root->d<<" - ";
   inorder(root->right);
}
int main(){

node *root=buildTree();
//bfs(root);
inorder(root);

}
