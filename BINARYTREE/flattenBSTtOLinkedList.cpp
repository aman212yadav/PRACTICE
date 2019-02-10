// given a BST ,convert it to Linked list


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
class linkedList{
  public:
      node *head;
      node *tail;
};
linkedList flattenBST(node *root){
     linkedList l;
  if(root==NULL)
  {

      l.head=l.tail=NULL;
      return l;
  }
  if(root->left==NULL && root->right==NULL)
  {
      l.head=root;
      l.tail=root;
      return l;
  }
  if(root->left!=NULL && root->right==NULL)
  {
      linkedList sl=flattenBST(root->left);
      sl.tail->right=root;
      sl.tail=root;
      return sl;
  }
  if(root->left==NULL && root->right!=NULL)
  {

      linkedList s1=flattenBST(root->right);
      s1.head->left=root;
      s1.head=root;
      return s1;
  }
  else{
    linkedList sl,sr;
    sl=flattenBST(root->left);
    sr=flattenBST(root->right);
    sl.tail->right=root;
    root->right=sr.head;
    sl.tail=sr.tail;
    return sl;
  }

}
int main(){

node *root=buildTree();
linkedList l=flattenBST(root);
node *temp=l.head;
while(temp!=NULL){
        cout<<temp->d<<"  ";
        temp=temp->right;
}
}
