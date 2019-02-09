// search a given element in the BST TREE


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
bool searchInBST(node *root,int s){
  if(root==NULL)
      return false;
  if(root->d== s)
    return true;
  if(s <= root->d)
     return searchInBST(root->left,s);
  else
    return searchInBST(root->right,s);
}
int main(){

node *root=buildTree();
int data;
cin>>data;
if(searchInBST(root,data))
    cout<<"Present ";
else
    cout<<"LOL ";

}
